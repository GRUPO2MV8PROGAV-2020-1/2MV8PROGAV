/* TestRectangulo.cpp */
#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main(int argc,char *argv[])
{
  Rectangulo R;
  cout<<"Cuantos rectangulos? "<<Rectangulo::cuentaDRectangulos<<endl;
  R.set_base(20);
  Rectangulo R1(40.5,10);
  cout<<"Cuantos rectangulos? "<<R.cuentaDRectangulos<<endl;
  R.set_altura(10);
  cout<<"El area del rectangulo R es "<<R.area()<<endl;
  Rectangulo *p,*R_Pt=&R;
  cout<<"El area del rectangulo R es "<<R_Pt->area()<<endl;
  cout<<"Base="<<R.get_base()<<endl;
  cout<<"Altura="<<R.get_altura()<<endl;
  R_Pt=new Rectangulo(20.6,15);
  cout<<"El area del rectangulo "<<Rectangulo::cuentaDRectangulos<<" es "<<R_Pt->area()<<endl;
#ifdef CONSTRUCTOR_PRED /*si no esta definido CONTRUCTOR_PRED*/
  p=new Rectangulo(12.0f);
  cout<<"El area del rectangulo "<<Rectangulo::cuentaDRectangulos<<" es "<<p->area()<<endl;
  cout<<"Base del rectangulo "<<Rectangulo::cuentaDRectangulos<<" es "<<p->get_base()<<endl;
  cout<<"Altura del rectangulo "<<Rectangulo::cuentaDRectangulos<<" es "<<p->get_altura()<<endl;
#endif /*CONSTRUCTOR_PRED*/
  
  delete R_Pt;
  delete p;

  return 0;
}/*main()*/

