#include <stdio.h>
#include<conio.h>

int main (void)
{
int primo = 2; 
int numero,contador,Suma;

Suma=0; 

printf("Introduce un numero: ");
scanf("%d",&numero);

for(contador=1;contador<=numero;contador++)
{
    if(numero%contador==0) 
    	Suma++;
}


if(Suma==2)
	printf("El numero es primo");

else
    printf("El numero no es primo"); 

getch();

}


	
