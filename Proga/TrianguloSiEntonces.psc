//    Lee los tres lados de un triangulo rectangulo, determina 
// si corresponden (por Pitagoras) y en caso afirmativo 
// calcula el area

Algoritmo TrianguloRectangulo
	
	
	// cargar datos
	Definir l1,l2,l3 Como Real;
	Definir area como real;
	area<-(cat1*cat2)/2;
	Definir cat1,cat2,hip Como Real;
	
	Escribir "Ingrese el lado 1, 2 y 3:";
	Leer l1, l2, l3;
	
	
	// encontrar la hipotenusa (mayor lado)
	Si l1>l2 Entonces
		cat1<-l2;
		Si l1>l3 Entonces
			hip<-l1;
			cat2<-l3;
		SiNo
			hip<-l3;
			cat2<-l1;
		FinSi
	SiNo
		cat1<-l1;
		Si l2>l3 Entonces
			hip<-l2;
			cat2<-l3;
		SiNo
			hip<-l3;
			cat2<-l2;
		FinSi
	FinSi
	
	// ver si cumple con Pitagoras
	Si hip^2 = cat1^2 + cat2^2 Entonces
		// calcualar area
		Escribir "El area es: ",area;
	SiNo
		Escribir "No es un triangulo rectangulo.";
	FinSi
	
FinAlgoritmo
