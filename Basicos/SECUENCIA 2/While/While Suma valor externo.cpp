#include <stdio.h>
#include <conio.h>

int main (void)
{
	int numero, suma;
	
	printf("Dame el numero: ");
	scanf("%i",&numero);
	
	
	while (numero!=0)
		{
		suma=suma+numero;
		
		printf("Dame el numero: ");
		scanf("%i",&numero);
		
		
		}
	
	printf("%i",suma);
	
		
	getch();
	
}


