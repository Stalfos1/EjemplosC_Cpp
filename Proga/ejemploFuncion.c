/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tama�o del arreglo determina la longitud
   m�xima que puede tener la cadena que guarda (tama�o-1, por el caracter de terminaci�n).
   La constante MAX_STRLEN define el tama�o m�ximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se ley�
   otra variable con scanf. */

// Declaraciones adelantadas de las funciones
void saludar(SIN_TIPO valor1);
int restar(float valor1, float valor2, float valor3);
int sumar(SIN_TIPO valor1, SIN_TIPO valor2);

void saludar(SIN_TIPO valor1) {
	printf("Hola%s\n",valor1);
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

/* Problema: incremente en uno un valor dado */
int main() {
	int c;
	int d;
	int e;
	int f;
	char nombre[MAX_STRLEN];
	printf("Ingrese su nombre:\n");
	scanf("%s",nombre);
	saludar(nombre);
	printf("Escriba tres numeros\n");
	scanf("%i",&c);
	scanf("%i",&e);
	scanf("%i",&f);
	d = sumar(c,e);
	printf("El resultado de la suma de los dos primeros n�meros es:%i\n",d);
	d = restar(c,e,f);
	printf("El resultado funcion de la suma de los tres numeros es:%i\n",d);
	return 0;
}

