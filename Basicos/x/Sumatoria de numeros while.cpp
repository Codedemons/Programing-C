#include<stdio.h>
#include<conio.h>
int main (void)
{
	float suma,num;														//
	printf("ingresa un numero para sumar: ");
	scanf("%f",&num);
	while(num>0)
	{
		suma=suma+num;
		printf("ingresa un numero para sumar: ");
		scanf("%f",&num);
	}
	printf("la sumatoria es: %f",suma);
getch();
}
