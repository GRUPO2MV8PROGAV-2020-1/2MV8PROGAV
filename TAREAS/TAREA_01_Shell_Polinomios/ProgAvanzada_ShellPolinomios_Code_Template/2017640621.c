/**
 * originalmente funcion04.c
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
#include "Polinomio.h"
#define DISC00
#ifdef DISC00
/*Stub*/
void do_derivar(Pol_Directory& the_directory,
                       string& op,
                       string& var){
	string operando1=op1;
	string string_pol_der=var;
	string coeffs1=the_directory.lookup_entry(operando1);
	String_Tokenizer tokenizer1(coeffs1, ":");
	vector<string> arr1;
	while(tokenizer1.has_more_tokens()){
          arr1.push_back(tokenizer1.next_token());
        }//end while()

	int num,den;	/*numerador,denominador*/
	Rac *RacPt1=new Rac[arr1.size()];
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
	int n sizeof(PolOp1);
	float der[n-1];

	for(int i=1; i<n; i++){
	der[i-1] = PolOp1[i] * i; 
	}
	for(int i=1; i<n; i++){
	Polinomio PolResult[i]=der[i];
	}
	string resultado=PolResult.string_show();
	the_directory.add_or_change_entry(string_pol_derivar,resultado);	
}

#endif
