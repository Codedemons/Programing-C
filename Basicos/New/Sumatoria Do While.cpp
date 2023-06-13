#include<stdio.h>
#include<conio.h>

int main(void)
{
	int suma=0,contador=1, numero=0;
	
	printf("Da el numero: ");
	scanf("%i", & numero);
	do
	{
		suma=suma+contador;
		contador++;
	}
	while(contador<=numero);
	printf("La sumatoria es: %i", suma);
	getch();
}
