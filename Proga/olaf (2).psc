Algoritmo EjemploSegun
	Definir Olaf, d, e, f Como Entero;
	Escribir "Bienvenido a tu calculadora basica"; 
	Escribir "Elija 1,2,3,4 para continuar y 0 para terminar"; 
	Escribir "Opciones"; 
	Escribir "1: Sumar"; 
	Escribir "2: Restar"; 
	Escribir "3: Multiplicar"; 
	Escribir "4: Division"; 
	
	Repetir

	Leer Olaf;

		Segun Olaf Hacer
			
		1:
			Escribir "Ingrese dos números";
			Leer d, e;
			f= d + e ;
			Escribir "El resultado de la suma es", f;
		2:
			Escribir "Ingrese dos números";
			Leer  d, e;
			f=d-e;
			Escribir "El resultado de la resta es", f;
		3:
			Escribir "Ingrese dos números";
			Leer d, e;
			f= d*e;
			Escribir "El resultado de la multiplicación es", f;
		4:
			Escribir "Ingrese dos números";
			Leer d, e;
			f= d/e;
			Escribir "El resultado de la division es", f;
		De Otro Modo:
			Escribir "Opción invlida";
	Fin Segun
Hasta Que Olaf=0;
FinAlgoritmo
