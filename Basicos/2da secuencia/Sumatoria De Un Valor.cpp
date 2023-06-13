#include<stdio.h>
#include<conio.h>

int main (void)
{
	int v=0,sumatoria=0;
	printf("Ingrese el numero ");
	scanf("%i",&v);
	
	while(v!=0)
{
	
	sumatoria=sumatoria+v;
	
	printf("Ingrese el numero ");
	scanf("%i",&v);
	
}

printf("La sumatoria es: %i",sumatoria);
getch();
}
