#include<stdio.h>
#include<conio.h>
int main (void)
{
	int i=1;
	float fac=1,num;														
	printf("ingresa un numero para calcular su factorial: ");
	scanf("%f",&num);
	while(i<num&&num>0)
	{
		i++;
		fac=fac*i;
	}
	printf("El factorial es: %f",fac);
getch();
}
