/* Rectangulo.h */
#ifndef RECTANGULO
#define RECTANGULO
#include <iostream>
#include "FiguraGeometrica.h"
using namespace std;

class Rectangulo : public FiguraGeometrica{
public:
  static int cuentaDRectangulos;
  int intId;  /* integer Identifier */
private:
  float base;
  float altura;
public:
  virtual float area();
  void set_base(float);
  void set_altura(float);
  float get_base();
  float get_altura();
#ifndef CONSTRUCTOR_PRED /*si no esta definido CONTRUCTOR_PRED*/
  Rectangulo();
  Rectangulo(float,float);
#else
  Rectangulo(float=20,float=10);
#endif /*CONSTRUCTOR_PRED*/
   Rectangulo operator+(Rectangulo);
#ifdef NOREFERENCE_ERROR
friend ostream operator<<(ostream,Rectangulo);
#else
friend ostream& operator<<(ostream&,Rectangulo&);
#endif /*NOREFERENCE_ERROR*/
};/* end class Rectangulo */
#endif /*RECTANGULO*/

