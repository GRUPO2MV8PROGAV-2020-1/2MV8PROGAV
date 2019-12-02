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
#include "Polinomio.h"
#define DISC00
#ifdef DISC00
/*Stub*/
Polinomio composicion(Pol_Directory& the_directory,
                       string& op1,
                       string& op2,
                       string& var){
	string operando1=op1;
	string operando2=op2;
	string string_pol_suma=var;
#ifndef NDEBUG
  cout<<"\nIniciando depuraci\\'on 2019.10.22\n";
#endif /*NDEBUG*/

	string coeffs1=the_directory.lookup_entry(operando1);
	string coeffs2=the_directory.lookup_entry(operando2);
#ifndef NDEBUG
  cout<<"\ncoeffs1:"<<coeffs1<<endl;
  cout<<"\ncoeffs2:"<<coeffs2<<endl;
#endif /*NDEBUG*/

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
//****************OPERACIONES**************
    int sizePol1,sizePol2;
    //ASIGNAR GRADO DE POLINOMIOS 
    Polinomio ss;
    int m
    for(int i=0;i<sizePol1;i++) {
        m=0
        for(int j=0;j<sizePol1-m;j++){
          
        }
        m++;
	ss= multi(pol1,4); //MULTIPLICAR POR COEFICIENTE DE POLINOMIOS
        ss = suma(multi(pol1,pol1),ss);
    }
    Polinomio res;
}
#else
void composicion(Pol_Directory& the_directory,
                       string& op1,
                       string& op2,
                       string& var){
    /* INCLUDE REMAINING CODE HERE */
}
#endif
