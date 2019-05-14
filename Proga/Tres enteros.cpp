
#include<iostream>
using namespace std;


int main() {
	int d,e,f,g;
	char olaf;
		system ("color b0");
	cout << "Bienvenido usuario" << endl;
	cout << "Elija a,b,c,d,e o escriba s para terminar" << endl;
	cout << "a: Sumar" << endl;
	cout << "b: Promedio" << endl;
	cout << "c: Producto" << endl;
	cout << "d: Numero mayor" << endl;	
	cout << "e: Numero menor" << endl;
	do {
		
		cin >> olaf;
			
		switch (olaf) 	
		{	
		case 'a':
			cout << "Ingrese tres numeros" << endl;
			cin >> d >> e >> g;
			f = d+e+g;
			cout << "El resultado de la suma es" << f << endl;
			break;
			
		case 'b':
			cout << "Ingrese tres numeros" << endl;
			cin >> d >> e >>g;
			f = (d+e+g)/3;
			cout << "El promedio es" << f << endl;
			break;
			
		case 'c':
			cout << "Ingrese tres numeros" << endl;
			cin >> d >> e >> g;
			f = d*e*g;
			cout << "El resultado de la multiplicación es" << f << endl;
			break;
			
		case 'd':
			
			cout << "Ingrese tres valores" << endl;
	        cin >> d >> e >> g;
	     if (d>e) {
		   if (e>g) {
			cout << d << "Es el numero mayor" << endl;
		   }   else {
		    	if (g>d) {
				cout << g << "Es el mayor número" << endl;
			  } else {
				cout << d << "Es el mayor numero" << endl;
			 }
		    }
	         } else {
		     if (e>g) {
		     	cout << e << "Es el numero mayor" << endl;
	       	} else {
		     	cout << g << "Es el numero mayor" << endl;
					}
            	}
             	
     			break;
				
		case 'e':
			
			  cout << "Ingrese tres valores" << endl;
	          cin >> d >> e >> g;
	         if (d<e) {
		     if (e<g) {
			 cout << d << "Es el numero menor" << endl;
		     } else {
			     if (g<d) {
				 cout << g << "Es el menor nmero" << endl;
			     } else {
			    	cout << d << "Es el menor numero" << endl;
			 }
		     }
	         } else {
		      if (e<g) {
			  cout << e << "Es el numero menor" << endl;
	    	  }  else {
			  cout << g << "Es el numero menor" << endl;
			    		}
    	   }
    	 
		    	  break;
			
				
		case 's':
			cout << "Adios" << endl;
			break;
		default:
			cout << "Opcion invalida" << endl;
			
		}
	} while (olaf!='s');
	return 0;
}
