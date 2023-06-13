#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main (void)
{
	system("color 0A");
	char abedecario='A';	
	char *apuntador;
	
	apuntador=&abedecario;
	 
	do
	{ 
	printf("%c",abedecario);
	abedecario++;
	}
	while(abedecario<='Z');
	
	printf("\n Apuntador:  %c ",apuntador);
	printf("\n Direccion:  %u ",&apuntador);	
	getch();	
}
