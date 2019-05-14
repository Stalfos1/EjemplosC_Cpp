#include <iostream>

using namespace std;
int acum=0;
 main()
{
	for( int i=0 ; i<30 ; i++)
	{
	
	if(i%5==0)
	{
	continue;//saltar
 }
     acum +=i;
  }
  cout<< "la suma es:"<<acum;
}
