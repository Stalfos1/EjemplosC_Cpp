#include <iostream>
#include <iomanip>

using namespace std;
int main (){
	int a,i;
	
	cout << "ingrese un numero a multiplicar" << endl;
	cin >> a;
	for(i=1; i<=12; i++)
	{
		cout << setw(2) <<a << setw(3) << "x" << setw(3)<< i << "="<< setw(4)<< a*i <<endl;
		
	}
	return 0;
	
}
