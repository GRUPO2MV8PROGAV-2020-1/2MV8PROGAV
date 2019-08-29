/* Circulo.cpp */
#include "Circulo.h"

float Circulo::area()
{
  return  PI*radio*radio;
}

Circulo::Circulo(std::string cir_name,float r)
:FiguraGeometrica(cir_name),radio(r){ }

std::basic_ostream<char>& operator<<(std::basic_ostream<char>& out, 
Circulo& ObjCir)
{
  out<<figure_name<<" "<<"radio="<<objCir.radio<<endl;
  return out;
}

