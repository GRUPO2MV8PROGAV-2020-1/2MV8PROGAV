#include <vector>
#include <stdio.h>
using std::vector;
void show_vector(vector<int> V)
{
  for(int i=0;i<V.size();++i){
    printf("%10d",V[i]);
  }
}

