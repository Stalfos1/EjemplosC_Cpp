#include <iostream>
#include <stdio.h>
#include <float.h>

using namespace std;
int main()

{
   system("color b3");
   cout<< sizeof(int)<<endl;
   cout<< sizeof(long)<<endl;
   cout<< sizeof(float)<<endl;
   cout<< sizeof(double)<<endl;
   cout<< FLT_MIN << endl;
   
   cout<<"Mi mama dice\"que te levantes\"";
   cout<< "hola"<<endl<<"mundo";
   cout<<"hola \n mundo";
   
   printf("El color es: %a, el numero es: %b, el real es: %d", 'r', 12.43,456789);
   
   
   return 0;
}     
