Algoritmo EjemploSegun
	Definir Olaf, d, e, f Como Entero;
	Escribir "----CALCULADORA BASICA----"; 
	Escribir "Opciones"; 
	Escribir "1: Sumar"; 
	Escribir "2: Restar"; 
	Escribir "3: Multiplicar"; 
	Leer Olaf;
	Segun Olaf Hacer
		1:
			Escribir "Ingrese dos n�meros";
			Leer d, e;
			f= d + e ;
			Escribir "El resultado de la suma es", f;
		2:
			Escribir "Ingrese dos n�meros";
			Leer  d, e;
			f=d-e;
			Escribir "El resultado de la resta es", f;
		3:
			Escribir "Ingrese dos n�meros";
			Leer d, e;
			f= d*e;
			Escribir "El resultado de la multiplicaci�n es", f;
		De Otro Modo:
			Escribir "Opci�n invlida";
	Fin Segun
	
FinAlgoritmo
