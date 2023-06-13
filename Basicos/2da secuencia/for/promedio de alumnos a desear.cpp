
#include<stdio.h>
#include<conio.h>

int main (void)
{

	int ca, i;
	float c,prom;
	float s=0;
	
	printf("dame la cantidad de alumnos :");
	scanf("%i",&ca);
	
	for(i=0; i<ca; i++)
{
	printf("ingresa la calificacion del alumno");
	scanf("%f",&c);
	s=s+c;
	
	
	
}	
prom=s/ca;

printf("el promedio grupal es: %f",prom);
getch();
	
}
