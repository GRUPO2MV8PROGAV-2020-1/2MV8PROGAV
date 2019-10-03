/* FiguraGeometrica.cpp */

#include "FiguraGeometrica.h"
FiguraGeometrica::FiguraGeometrica(std::string name)
:figure_name(name){ }/* vacio */


ostream& operator<<(ostream& out,FiguraGeometrica& FG)
{
  out<<FG.figure_name;
  return out;
}

