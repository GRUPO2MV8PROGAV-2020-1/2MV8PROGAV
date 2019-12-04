#include <iostream>
#include <cstdlib> 
#include <ctype.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(){

char r,q;


while(1){
	cout<<"En que IDE deberia graficar el polinomio?\n a) MATLAB \n b) Octave \n c) Scylab \n";
	q=getche();

	r=tolower(q);
		if((r=='a')||(r=='b')||(r=='c'))
			{
			break;
			}
		
		else
			{
			cout<<"\n";
			cout<<q;
			cout<<" No es una opcion valida "<<endl;
			system("pause");
			system("cls");
			}
	
		} 
	
	cout<<"\nEntonces se llama a la funcion que entrega los valores del polinomio\n"<<endl;
	system("pause");
	cout<<"\n";
	cout<<"\nEn este tercer paso deberia imprimirla en la opcion elegida\n"<<endl;
    system("pause");

return 11;
}
