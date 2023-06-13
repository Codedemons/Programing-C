#include<stdio.h>
#include<conio.h>

int main (void)
{
int primo=2;
int num, cont, suma;
	
suma=0;

printf("Dame un numero: ");
scanf("%d",&num);
		
for(cont=1; cont<=suma; cont++)
{
	if(num%cont==0)
		suma++;
}
if(suma==2)
	printf("El nuevo es primo");
	
else
	printf("El numero no es primo");
	
getch();

}
