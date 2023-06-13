#include <stdio.h>
#include<conio.h>

	int main (void)
	{ 
	int i;
	float cal,prom,suma;
	
	for(i=0;i<30;i++)
	{
		printf("ingresa tu calificacion: ");
		scanf("%f",&cal);
		suma=suma+cal;
	}
	prom=suma/30;
	printf("el promedio es: %f",prom);
	
	getch();
	}
