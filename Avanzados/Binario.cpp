#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int binario(int n);

int main (void)
{
	int num;
	printf("da numero: ");
	scanf("%d",&num);
	printf("El decimal de %d",num);
	printf("\nBinario \n");
	binario(num);
	getch();
}


int binario (int n)
{
	
	if(n>1)
	binario(n/2);
	printf("%d",(n%2));
}
