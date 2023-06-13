#include<stdio.h>
#include<conio.h>
int main (void)
{
	float v1,v2,r;
	char operador;
	printf("da el operador: ");
	scanf("%c",&operador);
	printf("da el valor 1: ");
	scanf("%f",&v1);
	printf("da el valor 2: ");
	scanf("%f",&v2);

	if(operador=='+')
	{
		r=v1+v2;
		printf("el resultado de la suma es: %f", r);
	}
	else
	 if(operador=='-')
	{
		r=v1-v2;
		printf("el resultado de la resta es: %f", r);
	}
	else
	if(operador=='+')
	{
		r=v1/v2;
		printf("el resultado de la division es: %f", r);
	}
	 else
	 if(operador=='*')
	{
		r=v1*v2;
		printf("el resultado de la multiplicación es: %f", r);
	}
	else
		printf("no valido");
	getch();
}
