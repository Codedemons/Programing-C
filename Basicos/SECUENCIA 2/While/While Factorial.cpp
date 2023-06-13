#include <stdio.h>
#include <conio.h>

int main (void)
{
	int numero, i;
	
	printf("Dame el numero: ");
	scanf("%i",&numero);
	
	i=numero-1;
	
	while (i>0)
		{
			numero=numero*i;
			i--;
		}
		
	printf("%i",numero);
	
	
	
		
	getch();
	
}


