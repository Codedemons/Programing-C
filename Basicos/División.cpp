#include<stdio.h>
#include<conio.h>

int main (void)
{
	int num1, num2, division;
	
	printf("dame el num1: ");
	scanf("%d",&num1);
	
	printf("dame el num2: ");
	scanf("%d",&num2);
	
	division=num1/num2;
	
	printf( "\n   La Division es: %d", division );
	
	getch();
}
