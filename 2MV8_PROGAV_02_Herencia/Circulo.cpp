/* Circulo.cpp */
#include "Circulo.h"
#define PI	3.1416
using std::endl;
int Circulo::cuentaDCirculos=0;

float Circulo::area()
{
  return  PI*radio*radio;
}
static std::string cir_name="Circulo";
Circulo::Circulo(float r)
:FiguraGeometrica(cir_name),radio(r){ 
  intId=++cuentaDCirculos;
}

std::basic_ostream<char>& operator<<(std::basic_ostream<char>& out, 
Circulo& ObjCir)
{
  out<<ObjCir.figure_name<<" "<<ObjCir.intId<<": radio="<<ObjCir.radio<<endl;
  return out;
}

