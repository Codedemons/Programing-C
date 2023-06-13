#include<stdio.h>
#include<conio.h>

int main (void)
{
	float b, a, h;
	
	printf("dame la base: ");
	scanf("%f",&b);
	
	printf("dame la altura: ");
	scanf("%f",&h);
	
	a=(b*h)/2;
	
	printf( "\n El area del Triangulo es: %3f",a );
	
	getch();
}
