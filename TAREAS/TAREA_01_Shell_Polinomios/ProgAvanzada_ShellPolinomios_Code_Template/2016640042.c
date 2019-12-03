/**
 * originalmente funcion08.c
*/
#include <iostream>
#include <vector>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>	/*isatty()*/
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
//#define NDEBUG
#include <assert.h>
#include "Pol_Directory.h"
#include "String_Tokenizer.h"
#include "Polinomio.h"
#define TAMDBUF	100

using std::cout;
#include <stdio.h>
#include "Polinomio.h"
#define DISC00
#ifdef DISC00
/*Stub*/
/**
 *@param comand_line: un string que contendr´a un comando 
 * 		      tecleado por el usuario (en el shell
 * 		      del programa) y devuelve true si se 
*		      está tratando de ejecutar el comando
* 		      composición --que acordamos que sería 
 *		      de la forma comp(pol1,pol2).
 * */
bool comp(std::string& comand_line){    //PRIMERO DETECTAMOS LOS STRINGS INTRODUCIDOS POR EL USUARIO
	char workspace[]="worspace.txt";
	Pol_Directory the_directory;
	the_directory.load_data(workspace);
	static char buf[TAMDBUF],varname[TAMDBUF],coefici[TAMDBUF];
	bool fd,r,s1,numerador,denominador;
	string coeficients,ms,ms1,string_num,string_den,newpol,ceffs;
	string string_op1,string_op2;
	String_Tokenizer ST0;
	vector<string> pcoef;
	Rec *RacPt;
	Polinomio *Pol;
	while(getcmd(buf,sizeof(buf))>=0){
	   echo_(buf);
	   if(cmd_is_exit(buf)){
	      break; 
	  }
	if(r=rhay_equal_in_buf(but)){
	  if((!is_there_a_char_in_buf(buf,'comp')){  //DETECTAMOS SI ES UNA LLAMADA A "COMP"

	public static class StringExtensions
{:
	switch (comp.ToLower()){
		case "comp";
			return true;
		case "Comp"
			return true;
		case "COMP";
			return true;
		case "diffstring";
			return "false";
		default:
			throw new InvalidCastException("No se puede transformar el valor a un bool");

	}
 
	}	

	}
	  else{
	/* En buf hay un '=' y un signo + o un - o un * o un comp*/
	/* La variable del lado izquierdo del signo de de =*/
	get_var_name(buf,varname);
	ms=string(varname);
	/* Obtener cadena despues del = */
	ms1=get_string_after_equal(buf);
	/* Identificar las variables operandos */
	/*AQUI SI EL CODIGO DETECTÓ UN 'TRUE' DEL BOOL, SE EJECUTA LA SIGUIENTE PARTE DE LA FUNCIÓN
	  LA CUAL ME PARECE QUE ES 'do_comp'*/
	
	/* INCLUDE REMAINING CODE HERE */
	}
#else
bool comp(std::string& comand_line){
	/* INCLUDE REMAINING CODE HERE */
}
#endif	
