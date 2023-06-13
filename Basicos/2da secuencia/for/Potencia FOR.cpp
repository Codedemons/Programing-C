//Multiplicación de a*b de dos valores enteros postivos con suma 
#include<stdio.h>
#include<conio.h>

int main (void)
{
	int i;
	int a,b;
	int mult=1;
	
	printf("dame valor de a  :");
	scanf("%i",&a);
		printf("dame valor de b  :");
	scanf("%i",&b);
	
	for(i=1; i<=b; i++)
	{
	mult=a*mult;
	}
	
	printf("%i",mult);
	
}
