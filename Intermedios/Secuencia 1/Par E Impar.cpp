#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)

{
	int numero[5];
	int i, par=0, impar=0;
	system("color 0A");	
	
	for (i=0; i<5; i++)
	{
	printf("\n\t\t\t\t Ingresa los valores  %i:  ",i+1);
	scanf("%i",&numero[i]);
	}
	
	for(i=0 ; i<5; i++)
	{
		if(numero[i]%2==0)
		{
			par++;
		}else
			impar++;
	} 
	
			printf ("\n\t\t\t\t Son %i numeros par",par);
			printf ("\n\t\t\t\t Son %i numeros impar",impar);	
	getch();
}
