/** 2014140069.cpp */
#include "Directory_entry.h"
#include "Pol_Directory.h"
#include "Polinomio.h"
#include "Rac.h"
#include "String_Tokenizer.h"

/** Agregar el c\'odigo necesario para guardar un polinomio en 
 * el directorio de polinomios */
//                                Viernes 3 de octubre de 2019
//PARA: Discentes del grupo 2MV8                               
//Despu\'es de la clase de este jueves de 16:00 a 17:30, revis\'e 
//nuevamente el funcionamiento de la tarea 1 del curso y llegu\'e 
//a la conclusi\'on de que el problema que se nos present\'o en 
//la clase se debi\'o a que el archivo de recurso del proyecto 
//"workspace.txt" se encontraba ``da\~nado''. Despu\'es de borrar 
//el contenido de este archivo de texto y repetir las pruebas 
//intentadas en clase se logr\'o almacenar correctamente nuevas 
//variables polinomio. En virtud de lo anterior, la asignaci\'on 
//del m\'etodo 
//std::string 
//add_or_change_entry(const std::string& var_name,
//const std::string& coeffs);
//a la discente con n\'umero de boleta 2014140069 queda sin 
//materia de trabajo ya que ese m\'etodo a mi juicio est\'a 
//ya codificado correctamente. Raz\'on por la cual, la 
//asignaci\'on de la tarea 1 para la discente ser\'a el 
//siguiente m\'etodo:
#ifndef DISC2014140069
Polinomio& Polinomio::operator+(Polinomio& PolObj)
{
	int maxgrad=maximo(grado,PolObj.grado);
	Polinomio ResP(maxgrad,new Rac[maxgrad+1]);
	Polinomio& ResPol=ResP;   //Para devolver una referencia.
	if(grado==maxgrad){/*si el obj implicito es el de mayor grado*/
		for(int i=0;i<grado+1;i++){
			(ResPol.A+i)->n=(A+i)->n;
			(ResPol.A+i)->d=(A+i)->d;
		}
	}else{/*si el segundo operando es el de mayor grado*/
		for(int i=0;i<PolObj.grado+1;i++){
			(ResPol.A+i)->n=(PolObj.A+i)->n;
			(ResPol.A+i)->d=(PolObj.A+i)->d;
		}
	}
	if(grado==maxgrad){/*si el objeto implicito es el polinomio de mayor grado*/
		//FIXMEEEEEEE!!!!!!        FIXED: 2018.06.25.16.36
		// i\in\{0,1,2,...,grado\} y queremos que los coeficientes del objeto 
		// impl\'icito se le sumen a los coeficientes del resultado correspondientes
		// a los \'indices \{grad - grado +0,grad - grado +1...,grad - 2,grad - 1,grad\} 
		for(int i=PolObj.grado;i>=0;i--){
			*(ResPol.A+ResPol.grado-(PolObj.grado-i))=*(ResPol.A+ResPol.grado-(PolObj.grado-i))+*(PolObj.A+i);
		}
	}else{/*si el segundo operando es el de menor grado*/
		for(int i=grado;i>=0;i--){
			*(ResPol.A+ResPol.grado-(grado-i))=*(ResPol.A+ResPol.grado-(grado-i))+*(A+i);
		}
	}
#ifndef NDEBUG
  cout<<ResPol;  
#endif /*NDEBUG*/
	return ResPol;
}//end Polinomio::operator+(Polinomio& PolObj)
#else
Polinomio& Polinomio::operator+(Polinomio& PolObj)
{
// Discente 2014140069
// Write your code here
}//end Polinomio::operator+(Polinomio& PolObj)
#endif /*DISC2014140069*/


