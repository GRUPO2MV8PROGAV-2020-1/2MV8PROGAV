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
Polinomio composicion(Polinomio &pol1,Polinomio &pol2){
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
