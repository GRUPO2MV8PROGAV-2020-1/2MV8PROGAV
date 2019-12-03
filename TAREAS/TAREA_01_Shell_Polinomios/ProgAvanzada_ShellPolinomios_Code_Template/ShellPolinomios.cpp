#include <iostream>
#include <vector>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>     /*isatty()*/
#include <stdio.h>
#include <fcntl.h>
#include <string.h>     /*memset()*/
#include "Pol_Directory.h"
#include "String_Tokenizer.h"
#include "Polinomio.h"
#define TAMDBUF       100

//void proccess_operation(Pol_Directory&,string&,unsigned char,string&);
//void do_suma(Pol_Directory&,string&,string&);
void do_save(Pol_Directory&);
int getcmd(char *buf, int nbuf);
void echo_(char[]);
int cmd_is_exit(char[]);
int hay_equal_in_buf(char buf[TAMDBUF]);
void get_var_name(char buf[TAMDBUF],char varname[TAMDBUF]);
void get_coefici(char buf[TAMDBUF],char varname[TAMDBUF],int);
int is_there_a_char_in_buf(char buf[TAMDBUF],char c);
int get_var_name1(char buf[TAMDBUF],char varname[TAMDBUF]);
string get_string_after_equal(char buf[TAMDBUF]);
void do_suma(Pol_Directory& the_directory,string& op1,string& op2,string& var);
void do_resta(Pol_Directory& the_directory,string& op1,string& op2,string& var);
void do_multiplicacion(Pol_Directory& the_directory,string& op1,string& op2,string& var);
void do_division(Pol_Directory& the_directory, string& op1, string& op2, string& var);

int main(int argc,char *argv[]){
  char workspace[]="workspace.txt";
  Pol_Directory the_directory;
  the_directory.load_data(workspace);
  static char buf[TAMDBUF],varname[TAMDBUF],coefici[TAMDBUF];
  int fd,r,s1,numerador,denominador;
  string coeficients,ms,ms1,string_num,string_den,newpol,coeffs;
  string string_op1,string_op2;
  String_Tokenizer ST0;
  vector<string> pcoef;
  Rac *RacPt;
  Polinomio *Pol;
  while(getcmd(buf,sizeof(buf))>=0){
    echo_(buf);
    if(cmd_is_exit(buf)){
      break;
    }
    if(r=hay_equal_in_buf(buf)){
      if((!is_there_a_char_in_buf(buf,'+'))&&
         (!is_there_a_char_in_buf(buf,'-'))&&
         (!is_there_a_char_in_buf(buf,'*'))
	 (!is_there_a_char_in_buf(buf,'/'))){
          get_var_name(buf,varname);
          ms=string(varname);/* ms contiene un nombre de variable polinomio */
          get_coefici(buf,coefici,r);
          coeficients=string(coefici);
          ST0=String_Tokenizer(coeficients,",");
          while(ST0.has_more_tokens()){
            pcoef.push_back(ST0.next_token());
          }
          
          RacPt=new Rac[pcoef.size()];
          for(int i=0;i<pcoef.size();i++){
            if((fd=pcoef[i].find("/"))!=std::string::npos){
              string_num=pcoef[i].substr(0,fd);
              string_den=pcoef[i].substr(fd+1);
              numerador=atoi(&(string_num[0]));
              denominador=atoi(&(string_den[0]));
            }else{
              string_num=pcoef[i];
              numerador=atoi(&(string_num[0]));
              denominador=1;
            }
            *(RacPt+i)=Rac(numerador,denominador);
          }/* end for() */
          Pol=new Polinomio(pcoef.size()-1,RacPt);
          newpol=Pol->string_show();
          the_directory.add_or_change_entry(ms,newpol);
      }else{
      /* En buf hay un '=' y tambi\'en hay un '+', \'o un '-', \'o un '*' */
      /* La variable del lado izquierdo del signo de = */
        get_var_name(buf,varname);
        ms=string(varname);
        /*obtener cadena despu\'es del = */
        ms1=get_string_after_equal(buf);//cout<<"="<<ms1<<endl;
        /*identificar las variables operandos*/
        if(is_there_a_char_in_buf(buf,'+')){
          if((fd=ms1.find("+"))!=std::string::npos){
            string_op1=ms1.substr(0,fd);//cout<<"|"<<string_op1<<"|"<<endl;
            string_op2=ms1.substr(fd+1);//cout<<"|"<<string_op2 <<"|"<<endl;
            fd=string_op1.find_first_not_of(' ');
            string_op1=string_op1.substr(fd);//cout<<"|"<<string_op1<<"|"<<endl;
            if((fd=string_op1.find(' '))!=std::string::npos){
              string_op1=string_op1.substr(0,fd);//cout<<"|"<<string_op1<<"|"<<endl;
            }
            fd=string_op2.find_first_not_of(' ');
            string_op2=string_op2.substr(fd);//cout<<"|"<<string_op2<<"|"<<endl;
            if((fd=string_op2.find(' '))!=std::string::npos){
              string_op2=string_op2.substr(0,fd);//cout<<"|"<<string_op2<<"|"<<endl;
            }
          }
          do_suma(the_directory,string_op1,string_op2,ms);
        }
        if(is_there_a_char_in_buf(buf,'-')){

          /* INCLUDE REMAINING CODE HERE */

          do_resta(the_directory,string_op1,string_op2,ms);
        }
        if(is_there_a_char_in_buf(buf,'*')){

          /* INCLUDE REMAINING CODE HERE */

          do_multiplicacion(the_directory,string_op1,string_op2,ms);
        }

	if (is_there_a_char_in_buf(buf,'/')){
          if ((fd=ms1.find("/"))!=std::string::npos) {
		string_op1=ms1.substr(0,fd):
		string_op2=ms1.substr(fd+1);
	        fd=string_op1.find_first_not_of(' ');
	        string_op1=string_op1.substr(fd);
	        if ((fd=string_op1.find(' '))!=std::string::pos){
		  string_op1=string_op1.substr(0,fd);
		}
      fd = string_op2.find_first_not_of(' ');
      string_op2=string_op2.substr(fd);
          if ((fd=string_op2.find(' '))!=std::string::npos){
	    string_op2=string_op2.substr(0,fd);
       }	    

	}
         do_division(the_directory,string_op1,string_op2,ms);  
      }
    }/* if(r=hay_equal_in_buf(buf)) */
    if(!(r=hay_equal_in_buf(buf))){
      //printf("SO FAR SO GOOD!\n");
      if(get_var_name1(buf,varname)){
        ms=string(varname);
        coeffs=the_directory.lookup_entry(ms);
        cout<<ms<<" = "<<coeffs<<endl;
      }else{
        /*En caso de que un buf sin '=' contenga +,-, o * no se hace algo*/
        /*Nothing to be done here*/
      }
    }
  }//end while(getcmd(buf, sizeof(buf)) >= 0)
  printf("Exiting now...\n");
  do_save(the_directory); 
  system("PAUSE");
  return 0;
}//end main()

void do_save(Pol_Directory& the_directory){
	the_directory.save();
}

int getcmd(char *buf, int nbuf){
  if (isatty(fileno(stdin)))
    fprintf(stdout, "$ ");
  memset(buf, 0, nbuf);
  fgets(buf, nbuf, stdin);
  if(buf[0] == 0) // EOF
    return -1;
  return 0;
}//end getcmd()

void echo_(char buf[]){
	int count=0;
	while(buf[count++]!=0);
    count--;
	/*al momento buf[count]==0 deberia ser true*/
	count--;
	while((buf[count]==' ')||(buf[count]=='\n')){
		count--;
	}/*al salir de este while puede suceder que buf[count] sea ';', 
    en cuyo caso no se hace echo*/
	if(buf[count]!=';'){
	  printf("%s",buf);
	}
}//end echo_(char buf[])

int cmd_is_exit(char buf[]){
  if((buf[0]=='e')&&(buf[1]=='x')&&(buf[2]=='i')&&(buf[3]=='t')){
    return 1;
  }
  return 0;
}

int hay_equal_in_buf(char buf[TAMDBUF]){
  int i=0;
  while((buf[i]!='\n')&&(i<TAMDBUF)){
    if(buf[i]=='='){
      return i;
    }
    i++;
  }
  return 0;
}
/**Esta funci\'on solo debe ser llamada si hay un '=' en
 * el arreglo buf. EL prop\'osito de la funci\'on es obtener 
 * el nombre de la variable correspondiente a un polinomio. 
 */
void get_var_name(char buf[TAMDBUF],char varname[TAMDBUF]){
  int lim=0,limS,limI=0,j;
  memset(varname,0,TAMDBUF);
  while(buf[lim]!='='){
    lim++;
  }
  for(j=0;j<lim;j++){
    varname[j]=buf[j];
  }
  if(varname[0]==' '){
    while(buf[limI]==' '){
      limI++;
    }
  }
  limS=lim-1;
  if(varname[limS]==' '){
    while((buf[limS]==' ')){
      limS--;
    }
  }
  for(j=limI;j<=limS;j++){
    varname[j-limI]=buf[j];
  }
  varname[limS-limI+1]='\0';
}

void get_coefici(char buf[TAMDBUF],char coefici[TAMDBUF],int r){
  int intOne=r,intTwo,j;
  while((buf[intOne]!='[')&&(intOne<TAMDBUF)){
    intOne++;
  }
  intOne++;
  intTwo=intOne;
  while((buf[intTwo]!=']')&&(intTwo<TAMDBUF)){
    intTwo++;
  }
  intTwo--;
  for(j=intOne;j<=intTwo;j++){
    coefici[j-intOne]=buf[j];
  }
  coefici[intTwo-intOne+1]='\0';
}

/**
 * Si en el arreglo buf est\'a el caracter c (y no est\'a 
 * en la posici\'on 0), devuelve el \'indice correspondiente 
 * a la posici\'on de este caracter (la primera aparici\'on). 
 * Si el caracter c no est\'a en el arreglo buf, devuelve 0.
 */
int is_there_a_char_in_buf(char buf[TAMDBUF],char c){
  int i=0;
  while((buf[i]!='\n')&&(i<TAMDBUF)){
    if(buf[i]==c){
      if(i==0){return 1;}else{return i;}
    }
    i++;
  }
  return 0;
}

/**
 * Esta funci\'on s\'olo debe ser llamada si no hay un '=' 
 * en el arrreglo buf. Si encuentra algo que podr\'ia ser 
 * el nombre de una variable (lo coloca en el arreglo varname), 
 * y entonces devuelve 1; si no, entonces devuelve 0.  
 */
int get_var_name1(char buf[TAMDBUF],char varname[TAMDBUF]){
  int start,end,enterpos,i=0;
  /*posicion del enter*/
  while((buf[i]!='\n')&&i<TAMDBUF){i++;}enterpos=i;i=0;
  /*Encontrar el primer y el \'ultimo caracter distinto de ' ' */
  while((buf[i]==' ')&&i<TAMDBUF){i++;}start=i;i=enterpos;
  if((!is_there_a_char_in_buf(buf,'+'))&&
     (!is_there_a_char_in_buf(buf,'-'))&&
     (!is_there_a_char_in_buf(buf,'*'))){
    if(buf[i]==' '){
      while((buf[i]==' ')&&(i>=0)){
      printf("i=%d\n",i);
      i--;}
    }end=i-1;
  }
  for(int j=start;j<=end;j++){varname[j-start]=buf[j];}
  varname[end-start+1]='\0';
  if(!is_there_a_char_in_buf(varname,' ')){
    return 1;
  }else{
    return 0;
  }  
}

/** Esta funci\'on s\'olo se debe llamar cuando se sabe que el 
 * arreglo buf contiene el char '='.
 */
string get_string_after_equal(char buf[TAMDBUF]){
  string result;
  char tmp[TAMDBUF];
  //Obtener la posici\'on del char '=' en buf
  int i=0,start,end;
  while((buf[i]!='\n')&&(i<TAMDBUF)){
    if(buf[i]=='='){
      break;
    }
    i++;
  }/*al salir del while en i est\'a la posici\'on del char '='*/
  start=i+1;i=0;
  //Obtener la posici\'on del enter
  while((buf[i]!='\n')&&(i<TAMDBUF)){i++;}end=i-1;
  for(int j=start;j<=end;j++){
    tmp[j-start]=buf[j];
  }
  tmp[end-start+1]='\0';
  result=string(tmp);
  return result;
}

void do_suma(Pol_Directory& the_directory,string& op1,string& op2,string& var){
	string operando1=op1;
	string operando2=op2;
	string string_pol_suma=var;

	string coeffs1=the_directory.lookup_entry(operando1);
	string coeffs2=the_directory.lookup_entry(operando2);

	String_Tokenizer tokenizer1(coeffs1, ":");
	String_Tokenizer tokenizer2(coeffs2, ":");
	vector<string> arr1;
	vector<string> arr2;
	while(tokenizer1.has_more_tokens()){
        arr1.push_back(tokenizer1.next_token());
    }//end while()
	while(tokenizer2.has_more_tokens()){
        arr2.push_back(tokenizer2.next_token());
    }//end while()

	int num,den;	/*numerador,denominador*/
	Rac *RacPt1=new Rac[arr1.size()],*RacPt2=new Rac[arr2.size()];
	string stringIntNum,stringIntDen;
	String_Tokenizer tokenizerForRac;
	for(int i=0;i<arr1.size();i++){
		tokenizerForRac=String_Tokenizer(arr1[i],"/");
		
		stringIntNum=tokenizerForRac.next_token();
		num=atoi(stringIntNum.c_str());
		
		stringIntDen=tokenizerForRac.next_token();
		den=atoi(stringIntDen.c_str());
		
		*(RacPt1+i)=Rac(num,den);
	}
	Polinomio PolOp1(arr1.size()-1,RacPt1);

    /* INCLUDE REMAINING CODE HERE */

	Polinomio PolOp2(arr2.size()-1,RacPt2);
	Polinomio PolResult=PolOp1+PolOp2;
	string resultado=PolResult.string_show();

	the_directory.add_or_change_entry(string_pol_suma,resultado);	
}

void do_resta(Pol_Directory& the_directory,string& op1,string& op2,string& var){
	string operando1=op1;
	string operando2=op2;
	string string_pol_resta=var;
        string resultado="";

	string coeffs1=the_directory.lookup_entry(operando1);
	string coeffs2=the_directory.lookup_entry(operando2);

    /* INCLUDE REMAINING CODE HERE */

	the_directory.add_or_change_entry(string_pol_resta,resultado);
}

void do_multiplicacion(Pol_Directory& the_directory,string& op1,string& op2,string& var){
    /* INCLUDE REMAINING CODE HERE */
}
