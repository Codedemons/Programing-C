#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main (void)
{
	int i=1, t,m;
		printf("Ingrese la tabla deseada: ");
		scanf("%i",&t);
	
	do
	{
			m=t*i;
	printf("%i x %i= %i \n",t,i,m);
	i++;
	}	
	while(i<11);
	
getch();
}
