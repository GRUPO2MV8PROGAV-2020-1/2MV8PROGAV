/* Rectangulo.cpp */
#include "Rectangulo.h"
int Rectangulo::cuentaDRectangulos=0;

#ifndef CONSTRUCTOR_PRED /*si no esta definido CONTRUCTOR_PRED*/
Rectangulo::Rectangulo():FiguraGeometrica("Rectangulo"),base(0),altura(0){
  intId=++cuentaDRectangulos;
}
#endif /*CONSTRUCTOR_PRED*/

static std::string rec_name="Rectangulo";
Rectangulo::Rectangulo(float base,float altura1)
:FiguraGeometrica(rec_name),altura(altura1)
{
  this->base=base;
  intId=++cuentaDRectangulos;
}

float Rectangulo::area(){
  return base*altura;
}

void Rectangulo::set_base(float b)
{
  base=b;
}

void Rectangulo::set_altura(float h)
{
  altura=h;
}

float Rectangulo::get_altura(){
  return altura;
}

float Rectangulo::get_base(){
  return base;
}

Rectangulo Rectangulo::operator+(Rectangulo objR)
{
  Rectangulo Resultado;
  Resultado.base=base+objR.base;
  Resultado.altura=altura+objR.altura;
  return Resultado;
}

#ifdef NOREFERENCE_ERROR
ostream operator<<(ostream salida,Rectangulo objR)
#else
ostream& operator<<(ostream& salida,Rectangulo& objR)
#endif /*NOREFERENCE_ERROR*/
{
  salida<<objR.figure_name<<" "<<objR.intId<<": "
        <<"base="<<objR.base<<", altura="<<objR.altura;
  return salida;
}

std::string Rectangulo::mostrar()
{
  char char_array_base[32],char_array_altura[32];
  sprintf(char_array_base,"%.2f",base);
  sprintf(char_array_altura,"%.2f",altura);
  std::string str_base=string(char_array_base);
  std::string str_altura=string(char_array_altura);
  return figure_name+": base="+str_base+" altura="+str_altura;
}


