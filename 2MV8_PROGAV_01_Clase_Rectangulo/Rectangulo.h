/* Rectangulo.h */
//struct Rectangulo{
class Rectangulo{
public:
  static int cuentaDRectangulos;
private:
  float base;
  float altura;
public:
  float area();
  void set_base(float);
  void set_altura(float);
  float get_base();
  float get_altura();
  Rectangulo();
};/* end struct Rectangulo */

