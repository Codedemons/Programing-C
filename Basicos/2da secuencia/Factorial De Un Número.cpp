#include<stdio.h>
#include<conio.h>

int main (void)
{
	int v1,v2;
	printf("Ingrese el numero al cual desea calcular el factorial:  ");
	scanf("%i",&v1);

v2=v1-1;

	while(v2!=0 )
{

v1=v1*v2;
v2=v2-1;
	
printf(".\n");	
}

printf(" El factorial del numero es : %i",v1);
getch();
}
