//Programa que cuenta las palabras de una cadena dada
#include <iostream>
#define ESPACIO ' '


using namespace std;

int main()
{
	int contador=0;
	string cadena= "  Escuela  Politecnica  Nacional  ";
	//char cadena [] = " Escuela Politecnica Nacional ";
	int tamanio = cadena.length();
	//int tamanio = sizeof (cadena);
	cout << tamanio << endl;
	for (int i=tamanio-1; i>=0;  i--)
	{ 
	  if (cadena [i] == ESPACIO && i==0)
	  {
	  	continue;
	  }
	  if (
	  	    cadena [i] == ESPACIO &&
	  	    cadena [i-1] != ESPACIO
	     )
	  {
	  	contador ++;
	  }
	
	}
	cout <<"el total de palabras encontradas son: " << ++contador;
	
	return 0;
}
