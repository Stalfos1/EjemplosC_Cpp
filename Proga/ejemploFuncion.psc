Funcion Saludar (valor1)
	Escribir "Hola", valor1;
FinFuncion

Funcion AvRetorno1 <- Restar (valor1, valor2,valor3)
	Definir AvRetorno1 Como Entero;
	AvRetorno1= -(-valor1 - valor2- valor3);
Fin Funcion


Funcion AvRetorno <- Sumar (valor1, valor2)
	Definir AvRetorno Como Entero;
	AvRetorno= valor1 + valor2;
Fin Funcion


//Problema: incremente en uno un valor dado
Algoritmo Ejemplofunción
	Definir c,d,e,f Como Entero;
	Definir nombre Como Cadena;
	Escribir "Ingrese su nombre:";
	Leer nombre;
	Saludar(nombre);
	Escribir "Escriba tres numeros"; 
	Leer c,e,f;

	d= sumar(c,e);
	Escribir  "El resultado de la suma de los dos primeros números es:", d;
	d= restar(c,e,f);
	Escribir "El resultado funcion de la suma de los tres numeros es:", d;
FinAlgoritmo
