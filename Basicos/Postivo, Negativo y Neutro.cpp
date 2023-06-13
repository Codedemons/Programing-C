#include<stdio.h>
#include<conio.h>

int main (void)
{
	int numero;
	
	printf("Ingrese el numero: ");
	scanf("%f",&numero);
	
    	if(numero>0)	
	printf("Es positivo");
	
		if(numero<0)	
	printf("Es negativo");
	
		if(numero==0)	
	printf("Es neutro");
	
	getch();
}
