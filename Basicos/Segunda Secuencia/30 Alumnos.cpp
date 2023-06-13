#include <stdio.h>
#include<conio.h>

	int main (void)
	{ 
	int i;
	float calf,prom,suma;
	
	for(i=0;i<30;i++)
	{
		printf("Ingresa tu calificacion: ");
		scanf("%f",&calf);
		suma=suma+calf;
	}
	prom=suma/30;
	printf("El promedio es: %f",prom);
	
	getch();
	}
