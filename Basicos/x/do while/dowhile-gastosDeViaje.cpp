#include<stdio.h>
#include<conio.h>
int main (void)
{
	float gasto, suma;
	do
	{
		printf("da gasto realizado: ");
		scanf("%f",&gasto);
		suma=suma+gasto;
	}while(gasto>0);
	printf("El total gastado es: %f", suma);
	getch();
}
