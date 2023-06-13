#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int factorial(int n);

int main (void)
{
	int num;
	printf("da numero: ");
	scanf("%d",&num);
	printf("El factorial de %d es %d",num,factorial(num));
	getch();
}


int factorial (int n)
{
	int res;
	if(n<2)
	res=1;
	else
	{
		res=n*factorial(n-1);
		return res;
	}
}
