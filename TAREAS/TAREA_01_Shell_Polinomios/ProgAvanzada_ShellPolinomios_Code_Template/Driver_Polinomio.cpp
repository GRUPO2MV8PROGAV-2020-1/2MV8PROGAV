#include <iostream>
using namespace std;
#include "Rac.h"
#include "Polinomio.h"

int main()
{
  Rac *RacPt=new Rac[3];
  *(RacPt+0)=Rac(1,1);
  *(RacPt+1)=Rac(1,2);
  *(RacPt+2)=Rac(1,3);
  Polinomio A(2,RacPt);
  cout<<A<<endl;

  Rac *RacPt1=new Rac[3];
  *(RacPt1+0)=Rac(1,1);
  *(RacPt1+1)=Rac(1,2);
  *(RacPt1+2)=Rac(1,6);
  Polinomio a(2,RacPt1);
  cout<<a<<endl;
  Polinomio b=A-a;
  cout<<b<<endl;
  cout<<"/*****************************/"<<endl;

  cout<<"A="<<endl;
  cout<<A<<endl;
  Rac *RacPt2=new Rac[2];
  *(RacPt2+0)=Rac(1,1);
  *(RacPt2+1)=Rac(1,2);
  Polinomio c(1,RacPt1);
  cout<<"c="<<endl;
  cout<<c<<endl;
  Polinomio d=A-c;
  cout<<"d=A-c"<<endl;
  cout<<"d="<<endl;
  cout<<d<<endl;
  cout<<"/*****************************/"<<endl;
  Polinomio e=c-A;
  cout<<"e=c-A"<<endl;
  cout<<"e="<<endl;
  cout<<e<<endl;


  return 0;
}/*end main()*/

