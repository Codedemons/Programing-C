#include <stdio.h>
#include<conio.h>

int main (void)
{

int A,B,Suma, contador; 

printf("Introduce un numero: ");
scanf("%d",&A);

printf("Introduce un numero: ");
scanf("%d",&B);

for(contador=0;contador<A;contador++)
{
    Suma=Suma+B;
}


printf("%d",Suma);

getch();

}


	
