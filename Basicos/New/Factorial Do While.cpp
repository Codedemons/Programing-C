#include<stdio.h>
#include<conio.h>

int main(void)
{
	int v1,v2;
	
	printf("Ingresa el numero: ");
	scanf("%i",& v1);
	
	v2=v1-1;
do
	{
		v1=v1*v2;
		v2=v2-1;
		
	}	while(v2>0);
	
	printf("El factorial del numero es:%i",v1);
	getch();
	
}
