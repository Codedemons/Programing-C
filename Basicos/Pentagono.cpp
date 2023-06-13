#include<stdio.h>
#include<conio.h>

int main (void)
{
	float P, a, A;
	
	printf("dame la Perimetro: ");
	scanf("%f",&P);
	
	printf("dame la Apotema: ");
	scanf("%f",&A);
	
	a=(P*A)/2;
	
	printf( "\n El area de Pentagono es: %f",a );
	
	getch();
}
