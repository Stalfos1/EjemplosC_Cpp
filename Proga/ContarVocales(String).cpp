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
	  if (
	  cadena [i]== 'a'
	  || cadena [i] == 'e' 
	  || cadena [i] == 'i' 
	  || cadena [i] == 'o' 
	  || cadena [i] == 'u' 
	  || cadena [i] == 'A' 
	  || cadena [i] == 'E' 
	  || cadena [i] == 'I' 
	  || cadena [i] == 'O'
	  || cadena [i] == 'U'  
	  )
	  
	  {
	  	contador = contador + 1;
	  	//contador ++;
	  	//contador +=1;
	  }
	}
	cout << "el total de vocales encontradas son:" << contador;
	return 0;
}
