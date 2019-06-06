
#include <iostream>
using namespace std;

int main()
{
	int contador=0;
	string cadena= " Escuela Politecnica Nacional " ;
	int tamanio = cadena.length();
	
	cout << tamanio << endl;
	for (int i = tamanio; i>=0; i--)
	{
		   cout << cadena [i];
	}
}
