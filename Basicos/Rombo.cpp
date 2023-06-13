#include<stdio.h>
#include<conio.h>

int main (void)
{
	float D, a, d;
	
	printf("dame la Diagonal: ");
	scanf("%f",&D);
	
	printf("dame la diagonal: ");
	scanf("%f",&d);
	
	a=(D*d)/2;
	
	printf( "\n El area del Rombo es: %f",a );
	
	getch();
}
