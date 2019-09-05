/* TestHerencia.cpp */
#include <iostream>
using namespace std;
#include "FiguraGeometrica.h"
#include "Rectangulo.h"
#include "Circulo.h"

int main(int argc,char *argv[])
{
 // FiguraGeometrica FG[2];
 // std::string figName[]={"Rectangulo","Circulo"};
  Rectangulo R(30.0f);
  Circulo C(10.0f);
  cout<<R<<endl;
  cout<<C<<endl; 
  return 0;
}/*end main()*/

