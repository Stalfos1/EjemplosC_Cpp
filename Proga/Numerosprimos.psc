Proceso IntervaloPrimos
	Definir a,b,c,d,e,f Como Entero;
	Escribir "ingrese un intervalo";
	Leer d,e;
	 a<-d;
	Mientras a<=e Hacer
		b<-1;
		c<-0;
		Mientras b<=a Hacer
			si a%b =0 Entonces
				c<-c+1;
			FinSi
			b<- b+1;
		Fin Mientras
		Si c=2 Entonces
			Escribir a;
		FinSi
		a<- a+1;
	Fin Mientras

FinProceso

