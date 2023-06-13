#include<stdio.h>
#include<conio.h>

int main (void)
{
	float b, a, h;
	
	printf("dame la base: ");
	scanf("%f",&b);
	
	printf("dame la altura: ");
	scanf("%f",&h);
	
	a=(b*h);
	
	printf( "\n El area del Rectangulo es: %f",a );
	
	getch();
}
