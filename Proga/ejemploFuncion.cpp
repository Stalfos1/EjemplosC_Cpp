// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
void saludar(SIN_TIPO valor1);
int restar(float valor1, float valor2, float valor3);
int sumar(SIN_TIPO valor1, SIN_TIPO valor2);

void saludar(SIN_TIPO valor1) {
	cout << "Hola" << valor1 << endl;
}

int restar(float valor1, float valor2, float valor3) {
	int avretorno1;
	avretorno1 = -(-valor1-valor2-valor3);
	return avretorno1;
}

int sumar(SIN_TIPO valor1, SIN_TIPO valor2) {
	int avretorno;
	avretorno = valor1+valor2;
	return avretorno;
}

// Problema: incremente en uno un valor dado
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

