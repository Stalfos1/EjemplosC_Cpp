Algoritmo EjemploSiEntonces
	Definir D,E, contador Como Entero;
	contador=-1;
	Repetir
	  Limpiar Pantalla;
	 Escribir 'Ingrese dos valores, ó 0 para finalizar:';
	 Leer D,E;
	     Si (D = 0)
	     contador = 0;
		 FinSi
	  Si D Es Menor Que  E Entonces
		Escribir D,'es menor que',E;
	  SiNo
		Si D Es Igual A E Entonces
			Escribir D,"es igual que", E;
		SiNo
			Escribir D,'es mayor que',E;
		FinSi
	 FinSi
	 contador = contador + 1;
	 
 Hasta Que contador=0;
FinAlgoritmo

