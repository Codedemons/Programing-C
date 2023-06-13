#include<stdio.h>
#include<conio.h>
int main (void)
	{
	int i=1;
	float fac=1,num;
	printf("ingresa un numero para calcular su factorial: ");
	scanf("%f",&num);														
	do
	{
		i++;
		fac=fac*i;
	}while(i<num&&num>1);
	
	printf("El factorial es: %f",fac);
	getch();
	}
