#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <utileria.h> /*show_vector()*/

using namespace std;

int main(int argc,char *argv[])
{
  if(argc<2){
    printf("Forma de uso:%s <intValue1> <intValue2> \
... <intValueN>",argv[0]);
    exit(1);
  }
  vector<int> lista;
  for(int i=1;i<argc;++i){
    lista.push_back(atoi(argv[i]));
  }
  show_vector(lista);

  return 0;
}//end main()

