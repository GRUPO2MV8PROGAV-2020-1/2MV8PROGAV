/* Rectangulo.cpp */
#include "Rectangulo.h"
int Rectangulo::cuentaDRectangulos=0;

Rectangulo::Rectangulo(){
  cuentaDRectangulos++;
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

