/**
 * originalmente funcion00.c
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
//#define NDEBUG
#include <assert.h>
#include <stdio.h>
#include "Polinomio.h"
#define DISC00
#ifdef DISC00
/*Stub*/
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
}//end do_suma()
#else
void do_suma(Pol_Directory& the_directory,string& op1,string& op2,string& var){
  //WRITE YOUR CODE HERE
}
#endif


