/* Circulo.h */
#ifndef CIRCULO
#define CIRCULO
#include <iostream>
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica{
  float radio;
public:
  static int cuentaDCirculos;
  int intId;
  virtual float area();
  Circulo(float);
friend std::basic_ostream<char>& operator<<(std::basic_ostream<char>&,
Circulo&);
};/* end class Circulo */
#endif /*CIRCULO*/

