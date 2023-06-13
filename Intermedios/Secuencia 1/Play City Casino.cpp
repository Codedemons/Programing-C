#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(void)
{
	int numero[5], c, r, b;
	int ganar=0;
	system("color 0A");
	
	 for (b=0; b<5; b++)
	{
	printf("\n\t\t\t\t Dime con cuales numeros jugaras:  ");
	scanf("%d", &numero[b]);
	}
	printf("\n\t\t\t\t Cuanto quieres apostar:  ");
	scanf("%d", &r);

	printf("\n\t\t\t\t Dime tu numero de la suerte:  ");
	scanf("%d", &c);
	
	for(b=0; b<5; b++)
	{
	if(c==numero[b])
	ganar++;
	}
	if(ganar==0)
	printf("\n\t\t\t\t Game Over...\n\t\t\t\t Continuar?.....");
	else
	printf("\n\t\t\t\t Eres MILLONARIO!!! %d",(r*ganar)+ r);


getch();	
}
