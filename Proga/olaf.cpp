// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int olaf;
	cout << "Ingrese una opción del 1 al 3" << endl;
	cin >> olaf;
	switch (olaf) {
	case 1:
		cout << "Escogió opción 1" << endl;
		break;
	case 2:
		cout << "Escogió opción 2" << endl;
		break;
	case 3:
		cout << "Escogió opción 3" << endl;
		break;
	default:
		cout << "Opción invlida" << endl;
	}
	return 0;
}

