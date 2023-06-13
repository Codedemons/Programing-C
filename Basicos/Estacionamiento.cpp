#include<stdio.h>
#include<conio.h>

int main (void)
{
	int t, h, c;
	
	printf("Ingresa la tarifa: ");
	scanf("%d",&t);
	
	printf("Ingresa el numero de horas de la estancia: ");
	scanf("%d",&h);
	
	c=t*h;
	
	printf( "\n El total a cobrar es: %d", c);
	
	getch();
}
