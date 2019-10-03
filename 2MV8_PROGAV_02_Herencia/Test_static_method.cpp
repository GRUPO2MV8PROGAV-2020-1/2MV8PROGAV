#include "FiguraGeometrica.h"
#include "Rectangulo.h"
#include <iomanip>  /*setw()*/
using std::setw;

int main(int argc,char *argv[])
{
  cout<<"Rectangulos: "<<setw(4)
      <<Rectangulo::get_cuentaDRectangulos()<<"\n";
  return 0;
}/**end main()*/

