
#include<stdio.h>
#include<conio.h>

int main(void)
{
	int num, i, cont=0;
	
	printf("da un numero entero: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		cont++;
	}
	if(cont==2)
		printf("es numero primo");
	
	else
		printf("es compuesto");
	
	getch();
}
