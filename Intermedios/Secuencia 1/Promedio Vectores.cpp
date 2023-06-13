#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main (void)

{
	float c1 [5], c2 [5], c3 [5], promedio [5];
	char nombre [5];
	int i=0, matricula [5];
	system("color 0A");
	
	for (i=0; i<2; i++)
	{
	printf("\n\t\t\t\t Ingresa tu nombre: ");
	scanf("%s",&nombre[i]);	
	printf("\n\t\t\t\t Ingresa tu matricula: ");
	scanf("%i",&matricula[i]);
	printf("\n\t\t\t\t Ingresa tu primera calificacion: ");
	scanf("%f",&c1[i]);
	printf("\n\t\t\t\t Ingresa tu primera calificacion: ");
	scanf("%f",&c2[i]);
	printf("\n\t\t\t\t Ingresa tu primera calificacion: ");
	scanf("%f",&c3[i]);	
		
		promedio [i]=(c1[i]+c2[i]+c3[i])/3;
		printf("\n\t\t\t\t El promedio es:%f",i+1);
	}

	for(i=0; i<2 ;i++)
	{


	printf("\n\t\t\t\t matricula: %i | nombre %c |primera: %f |segunda: %f |tercera: %f | promedio: %f",matricula[i], nombre[i], c1[i], c2[i], c3[i], promedio[i]);
	}
	getch();
	}
