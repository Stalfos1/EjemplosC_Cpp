//Ejemplo paso de parametros por referencia en arreglos
#include <iostream>
#define TAM_MAX 4



using namespace std;
void ImprimirValores (int [],int);

int main()
{
	int valores[TAM_MAX]= {1,2,3,4};
	
	ImprimirValores (valores, TAM_MAX);
	
	return 0;
}

void ImprimirValores (int a[])
{
	cout << sizeof (char) << endl;
	cout << sizeof (int) << endl;
	cout << sizeof (a[0]) << endl;
	cout << sizeof (a) <<endl;
	for (int i=0;   i<sizeof(a)/sizeof (a[0]);    i++)
	{
		cout <<a[i] ;
	}
}
