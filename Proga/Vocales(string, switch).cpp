//Programa que cuenta las vocales de una cadena dada
#include <iostream>

using namespace std;

int main()
{
	int contador=0;
	string cadena= "Escuela Politecnica Nacional";
	for (int i=0; i<28; i++)
	{ 
	  cout << cadena [i] << endl;  
	switch (cadena [i])
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':			
			contador ++;
			break;
		default:
			break;
	
	
	}
	  {
	  	contador = contador + 1;
	  	//contador ++;
	  	//contador +=1;
	  }
	}
	cout << "el total de vocales encontradas son:" << contador;
	return 0;
}
