#include<stdio.h>
#include<conio.h>
int main (void)
{
	float v1,v2,r;
	char operador;
	printf("Dame el operador: ");
	scanf("%c",&operador);
	printf("Dame el primer valor: ");
	scanf("%f",&v1);
	printf("Dame el segundo valor: ");
	scanf("%f",&v2);

	if(operador=='+')
	{
		r=v1+v2;
		printf("La suma es: %f", r);
	}
	else
	 if(operador=='-')
	{
		r=v1-v2;
		printf("La resta es: %f", r);
	}
	else
	if(operador=='*')
	{
		r=v1*v2;
		printf("La multiplicacion es: %f", r);
	}
	 else
	 if(operador=='/')
	{
		r=v1/v2;
		printf("La division es: %f", r);
	}

	getch();
}
