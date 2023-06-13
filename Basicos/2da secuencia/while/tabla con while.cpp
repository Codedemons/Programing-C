#include<stdio.h>
#include<conio.h>

int main ()
{
	int i=1, t,m;
	printf("ingrese la tabla deseada");
	scanf("%i",&t);
	
	while(i<11)
{
	
	m=t*i;
	
	printf("%i x %i= %i \n",t,i,m);
	
	i++;	
}
getch();
}
