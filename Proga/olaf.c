/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int olaf;
	printf("Ingrese una opci�n del 1 al 3\n");
	scanf("%i",&olaf);
	switch (olaf) {
	case 1:
		printf("Escogi� opci�n 1\n");
		break;
	case 2:
		printf("Escogi� opci�n 2\n");
		break;
	case 3:
		printf("Escogi� opci�n 3\n");
		break;
	default:
		printf("Opci�n invlida\n");
	}
	return 0;
}

