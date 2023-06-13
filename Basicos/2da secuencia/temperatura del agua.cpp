#include<stdio.h>
#include<conio.h>

int main (void)
{
float T;

printf ("ingrese la temperatura en grados C: \n");	
scanf("%f",&T);


if(T<0)
	printf ("el agua esta en estado  solido");

	else
		if(T>100)
			printf ("el agua esta en estado gasesos");	


else 
	printf ("el agua esta liquida");	


getch();	
}
