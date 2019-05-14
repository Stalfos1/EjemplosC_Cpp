#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

main()
{
     char letter = '\0';
	 do 
	 {
	      printf("\nIngrese la letra A:");
	      scanf("%c", &letter);
	      system("cls");
	      
	 }  while (letter !='A');

return 0;
}
