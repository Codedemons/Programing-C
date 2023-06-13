#include<stdio.h>
#include<conio.h>

int main (void)
{
	float pi=3.1416;
	float r, a;
	
	printf("dame el valor del radio: ");
	scanf("%f",&r);
	pi=3.1416;
	
	a=(pi)*(r*r);
	
	printf( "\n El area del Circulo es: %f",a );
	
	getch();
}
