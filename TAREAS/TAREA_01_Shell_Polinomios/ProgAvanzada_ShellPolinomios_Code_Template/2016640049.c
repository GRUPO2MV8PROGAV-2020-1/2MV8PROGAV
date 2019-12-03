/**
 * originalmente funcion07.c
 */
#include <iostream>
#include <vector>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>     /*isatty()*/
#include <stdio.h>
#include <fcntl.h>
#include <string.h>     /*memset()*/
//#define NDEBUG
#include <assert.h>
#include "Pol_Directory.h"
#include "String_Tokenizer.h"
#include "Polinomio.h"
#define TAMDBUF       100

using std::cout;
#include <stdio.h>
#include <math.h>
#include "Polinomio.h"
#define DISC00
#ifdef DISC00
/*Stub*/
Polinomio composicion(Pol_Directory& the_directory,
                       string& op1,
                       string& op2,
                       string& var){
	//*****OBTENER INDICE DE POLINOMIOS
	string operando1=op1;
	string operando2=op2;
	string string_pol_suma=var;

	string coeffs1=the_directory.lookup_entry(operando1);
	string coeffs2=the_directory.lookup_entry(operando2);
#ifndef NDEBUG
  cout<<"\ncoeffs1:"<<coeffs1<<endl;
  cout<<"\ncoeffs2:"<<coeffs2<<endl;
#endif /*NDEBUG*/

	//*****OBTENER COEFICIENTES
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
	
	for(int i=0;i<arr2.size();i++){
		tokenizerForRac=String_Tokenizer(arr2[i],"/");
		
		stringIntNum=tokenizerForRac.next_token();
		num=atoi(stringIntNum.c_str());
		
		stringIntDen=tokenizerForRac.next_token();
		den=atoi(stringIntDen.c_str());
		
		*(RacPt2+i)=Rac(num,den);
	}
	Polinomio PolOp2(arr2.size()-1,RacPt2);
	
	//***********OPERACION COMPOSICION DESDE COEFICIENTES
	int sizePol1,sizePol2;
	sizePol1 = arr1.size;
	sizePol2 = arr2.size;
	
	int newsize = sizePol1 * sizePol2;
	Rac *ResPt = new Rac[newsize];
	int num1[sizePol1],num2[sizePol2],den1[sizePol1],den2[sizePol2];
	string stIntNum1,stIntDen1;
	String_Tokenizer tkForRac1;
	string stIntNum2,stIntDen2;
	String_Tokenizer tkForRac2;
	
	//**********OBTENER COEFICIENTES DE POLINOMIOS
	
	
	for(int i=0;i<sizePol2;i++) {
		tkForRac2=String_Tokenizer(arr2[i],"/");
		stIntNum2=tkForRac2.next_token();
		num2[i]=atoi(stIntNum2.c_str());
		stIntDen2=tkForRac2.next_token();
		den2[i]=atoi(stIntDen2.c_str());
		
		tkForRac1=String_Tokenizer(arr1[i],"/");
		stIntNum1=tkForRac1.next_token();
		num1[i]=atoi(stIntNum1.c_str());
		stIntDen1=tkForRac1.next_token();
		den1[i]=atoi(stIntDen1.c_str());
	}
	
	int sizeEvalp1=sizePol1;
	int sizeEvalp2=sizePol2;
	
	int newN[newsize],newD[newsize],newP[newsize];
	Polinomio arrPol[sizePol1];
	*RacPtBuf=new Rac[sizePol2]
	for(int i=0;i<) {
		*(RacPtBuf + i)=Rac(1,1);
	}
	Polinomio polBuff(sizePol2-1,RacPtBuf);
	Polinomio polBuffRst(sizePol2-1,RacPtBuf);
	//************OPERACION DE ASIGANCION DE GRADO
	for(int i=0;i<sizePol1;i++) {
		
		//int firstCiclo = 0;
		for(int j=sizePol1-i;j>0;j--) {
			/*if(i==0) {
				newN[i] = pow(num2[i],)
			}*/
			polBuff = polBuff * PolOp2;
			newN[i] = pow(num2[i],[newsize])
		}
		
	
		
		//*(RacPt2+i)=Rac(num,den);
	}
//****************OPERACIONES**************
    /*int sizePol1,sizePol2;
	sizePol1 = arr1.size;
	sizePol2 = arr2.size;
	
	int newsize = sizePol1 * sizePol2;
	Rac *ResPt = new Rac[newsize];*/
	
	/*Polinomio PolOp1(arr1.size()-1,RacPt1);
	Polinomio PolOp2(arr2.size()-1,RacPt2);*/
    //ASIGNAR GRADO DE POLINOMIOS v0 
    Polinomio ss(newsize-1,ResPt);
    int m;
    for(int i=0;i<sizePol1;i++) {
        for(int j=0;j<sizePol1-m;j++){
			ss = 
        }
        m++;
	ss= pol1 * pol1; //MULTIPLICAR POR COEFICIENTE DE POLINOMIOS
        ss = multi(pol1,pol1) + ss;
    }
    
	
	
	Polinomio Res = ;
	string resultado = Res.string_show();

	the_directory.add_or_change_entry(string_pol_suma,resultado);
}
#else
void composicion(Pol_Directory& the_directory,
                       string& op1,
                       string& op2,
                       string& var){
    /* INCLUDE REMAINING CODE HERE */
}
#endif
