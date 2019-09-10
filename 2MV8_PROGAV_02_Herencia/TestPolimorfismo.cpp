#include <stdio.h>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Rectangulo.h"

#define VERSION(a,b,c) printf("%s.%s.%s",a,b,c)

static char X[]="2019";
static char Y[]="09";
static char Z[]="05";

int main(int argc,char *argv[])
{
  int i;
  FiguraGeometrica *arr[2];
  Circulo *C_Pt;
  Rectangulo *R_Pt;
  cout<<"Version:";
  VERSION(X,Y,Z);cout<<endl;
  C_Pt=new Circulo(10.0f);
  R_Pt=new Rectangulo(30.0f,20.0f);
  arr[0]=C_Pt;arr[1]=R_Pt;
  for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    std::string descr=arr[i]->mostrar();
    printf("|%2d |%-35s|%10s%10.2f|\n",i,descr.c_str(),"area = ",arr[i]->area());
  }

  delete C_Pt;
  delete R_Pt;
  return 0;
}//end main()


