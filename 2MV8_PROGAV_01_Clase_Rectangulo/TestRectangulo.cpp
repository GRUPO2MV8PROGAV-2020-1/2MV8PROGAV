/* TestRectangulo.cpp */
#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main(int argc,char *argv[])
{
  Rectangulo R;
  cout<<"Cuantos rectangulos? "<<Rectangulo::cuentaDRectangulos<<endl;
  //R.base=20;
  //R.altura=10;
  R.set_base(20);
  Rectangulo R1;
  cout<<"Cuantos rectangulos? "<<R.cuentaDRectangulos<<endl;
  R.set_altura(10);
  cout<<"El area del rectangulo es "<<R.area()<<endl;
  //cout<<"Base="<<R.base<<endl;
  //cout<<"Altura="<<R.altura<<endl;
  cout<<"Base="<<R.get_base()<<endl;
  cout<<"Altura="<<R.get_altura()<<endl;
  return 0;
}/*main()*/

