#include<stdio.h>
#include<conio.h>

int main (void)
{
	float B, b, h, a;
	
	printf("dame la Base: ");
	scanf("%f",&B);
	
	printf("dame la base: ");
	scanf("%f",&b);
	
	printf("dame la altura: ");
	scanf("%f",&h);
	
	a=((B*b)*h/2);
	
	printf( "\n El area del Trapecio es: %f",a );
	
	getch();
}
