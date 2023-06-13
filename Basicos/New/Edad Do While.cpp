#include<stdio.h>
#include<conio.h>

int main(void)
{
	int edad;
	
	printf("Dame la edad: ");
	scanf("%i",& edad);
	
   do 
	{
		if(edad>=1 && edad<=10)
		printf("Es niño \n ");
		if(edad>=11 && edad<=17)
		printf("Es joven \n");
		if(edad>=18 && edad <=55)
		printf("Es adulto \n ");
		if(edad>=56 && edad <=100)
		printf("Es senecto \n ");
		printf("Dar la edad: ");
		scanf("%i",& edad);
		
	}	while(edad>=1 && edad <=100);
	getch();
	
}   
