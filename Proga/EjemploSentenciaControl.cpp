#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char** argv) 
{
    int acumulador =0;
    cout << "programa que suma los 30 primeros numeros" <<endl;
    for(int i=1; i<30; i++)
    {
    	if(i%15==0)
		{
    		return 3;
		}
    	acumulador +=i;
	}
	cout << "El valor sumado es" << acumulador;
  	getch();
	return 0;
}
