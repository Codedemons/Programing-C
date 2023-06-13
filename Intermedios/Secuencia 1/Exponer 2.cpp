#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)

{
	int x;
	int i, a=0;
	system("color 0A");	
	
	for(i=0 ; i<1; i++)
	{
	printf("\n\t\t\t\t Ingresa un num  %i:  ",i+1);
	scanf("%f",&x);
	}
	
	for(i=1 ; i<x; i++)
	{
		if(x%i==0)
    a++;
	}
	if(a<1)
	printf("El numero es primo");
	if(a>1)
    printf("El numero es compuesto");

getch();
}
