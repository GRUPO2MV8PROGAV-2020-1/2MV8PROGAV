/* TestHerencia.cpp */
#include <iostream>
#include "FiguraGeometrica.h"
#include "Rectangulo.h"
#include "Circulo.h"
using namespace std;

int main(int argc,char *argv[])
{
 // FiguraGeometrica FG[2];
  std::string figName[]={"Rectangulo","Circulo"};
  Rectangulo R(30.0f);
  Circulo C(10.0f);
  cout<<R<<endl;
  cout<<C<<endl; 
  return 0;
}/*end main()*/

