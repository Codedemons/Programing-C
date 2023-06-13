#include<stdio.h>
#include<conio.h>
int main (void)
{
	float cal, prom, suma;
	int alumno=-1;
	do
	{
		printf("Da tu calificacion: ");
		scanf("%f",&cal);
		suma=suma+cal;
		alumno++;
	}while(cal>=0&&cal<=100);
	prom=suma/alumno;
	printf("El promedio es: %f",prom);
	getch();
}
