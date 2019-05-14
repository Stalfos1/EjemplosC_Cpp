
#include<iostream>
using namespace std;





void saludar(string valor1);
int restar(int valor1,int valor2, int valor3);
int sumar(int valor1, int valor2);

void saludar(string valor1) {
	cout << "Hola" << valor1 << endl;
}

int restar(int valor1, int valor2, int valor3) {
	int avretorno1;
	avretorno1 = -(-valor1-valor2-valor3);
	return avretorno1;
}

int sumar(int valor1, int valor2) {
	int avretorno;
	avretorno = valor1+valor2;
	return avretorno;
}

int main() {
	int c;
	int d;
	int e;
	int f;
	string nombre;
	cout << "Ingrese su nombre:" << endl;
	cin >> nombre;
	saludar(nombre);
	cout << "Escriba tres numeros" << endl;
	cin >> c >> e >> f;
	d = sumar(c,e);
	cout << "El resultado de la suma de los dos primeros números es:" << d << endl;
	d = restar(c,e,f);
	cout << "El resultado funcion de la suma de los tres numeros es:" << d << endl;
	return 0;
}

