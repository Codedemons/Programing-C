#include<stdio.h>
#include<conio.h>
int main (void)
{
	float cal, prom, suma, alumno;
	do
	{
		printf("Da tu calificacion: ");
		scanf("%f",&cal);
		if(cal>=0&&cal<11)
		{
		alumno++;
		suma=suma+cal;}
	}while(cal>=0&&cal<11);
	prom=suma/alumno;
	printf("El promedio es: %f",prom);
	getch();
}
