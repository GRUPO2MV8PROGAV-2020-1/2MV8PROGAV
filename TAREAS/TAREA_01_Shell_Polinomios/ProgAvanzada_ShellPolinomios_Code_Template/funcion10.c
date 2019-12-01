/**
 * originalmente funcion10.c
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
void do_rlocus(Pol_Directory& the_directory,
                 std::string& pol_num,
                 std::string& pol_den,
                 float KMin,float KMax){
    /* INCLUDE REMAINING CODE HERE */
}
#else
void do_rlocus(Pol_Directory& the_directory,
                 std::string& pol_num,
                 std::string& pol_den,
                 float KMin,float KMax){
    /* INCLUDE REMAINING CODE HERE */
}
#endif


