/* FiguraGeometrica.h */
/** Ejemplo de una clase abstracta
 *  La clase FiguraGeometrica es abstracta porque
 *  tiene un m\'etodo virtual puro.
 */
#ifndef FIGURA_GEOMETRICA
#define FIGURA_GEOMETRICA
#include <iostream>

class FiguraGeometrica{
protected:
  std::string figure_name;
public:
  virtual float area()=0; /* un m\'etodo virtual puro */
  FiguraGeometrica(std::string="");
};/* end class FiguraGeometrica */
#endif /*FIGURA_GEOMETRICA*/

