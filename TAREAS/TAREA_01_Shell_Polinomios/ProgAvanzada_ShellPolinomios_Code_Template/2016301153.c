//funcion division
#include <iostream>
#include <vector>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
//#define NDEBUG
#include <assert.h>
#include "pol_Directiry.h"
#include "string_Tokenizer.h"
#include "polinomio.h"
#define TAMBUF    100
using std::cout;

#include <stdio.h>
#include "polinomio.h"
#define DISC00
#ifdef DISC00
/*stub*/

void do_division(Pol_Directory& the_directory, string& op1, string& op2, string& var){
	string operando1 = op1;
	string operando2 = op2;
	string string_pol_suma = var;}

#ifndef NDBUG
	cout<< "\nIniciando depuraci\\´on 2019.10.22\n";

#endif /*NDEBUG*/

	string coeffs1=the_directory.lookup_entry(operando1);
	string coeffs2=the_directory.lookuo_entry(operando2);
#ifndef NDEBUG

	cout<<"\ncoeffs1:"<coeffs1<<endl;
	cout<<"\ncoeffs2:"<coeffs2<<endl;

#endif /*NDEBUG*/

	string_Tokenizer tokenizer1(coeffs1. ":");
	string_Tokenizer tokenizer2(coeffs2, ":");
	vector<string> arr1;
	vector<string> arr2;
	while(tokenizer1.has_more_tokens()){
		arr1.push_back(tokenizer1.next_token());
	}//end while()
        while(tokenizer2.has_more_tokens()){
		arr2.push_back(tokenizer2.next_token());
	}//end while()
#ifndef NDEBUG
class F1{
	public:
		static void f1(vector<string> arr){
			for(int i=0; i<arr.size(); i++){
				cout<<arr[i]<<"   ";
			}
			cout<< endl;
		}
};//end class F1
cout<<"arr1: ";
F1::f1(arr1);
cout<<"arr2: ";
F1::f1(arr2);
#endif /*NDEBUG*/

   int num,den; /*numerador,denominador*/
   Rac *RacPt1=new Rac[arr1.sizde()], *RacPt2=new Rac[arr2.size()];
   string stirngIntNum,stringIntDen;
   string_Tokenizer tokenizerForRac;
   for(int i=0; i<<arr1.size(); i++{
		   tokenizerForRac=String_Tokenizer(arr1[i], "/");

		   stringIntNum=tokenizerForRac.next_token();
		   num=atoi(stringIntNum.c_str());

		   stringIntDen=tokenizerForRac.next_token();
		   den=atoi(stringIntDen.c_str());
 #ifndef NDEBUG
		    cout<<"\ni="<<i<<":    num:"<<num",   den:"<<den<<endl;
  #endif /*NDEBUG*/

		       *(rACpT1+I)=rAC(NUM,DEN);
		       polinomio PolOp1(arr1.size()-1, RacPt1);

		       polinomio Polop2(arr2.size()-1,RacPt2);
		       polinomio PolResult.string_show();

		       the_directory.add_or_change_entry(string_pol_division,resultado);
		       }//end do_division()
#else

void do_division(Pol_directory& the_directory,string& op1, string& op2,string& var){
               poll1=op1;
               poll2=op2;
               	       
}

#endif
		       
