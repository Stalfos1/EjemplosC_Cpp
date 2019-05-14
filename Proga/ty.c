/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int d;
	int e;
	printf("Ingrese dos valores:\n");
	scanf("%i",&d);
	scanf("%i",&e);
	if (d<e) {
		printf("%ies menor que%i\n",d,e);
	} else {
		if (d==e) {
			printf("%ies igual que%i\n",d,e);
		} else {
			printf("%ies mayor que%i\n",d,e);
		}
	}
	return 0;
}

