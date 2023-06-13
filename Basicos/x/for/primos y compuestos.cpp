#include <stdio.h>
#include<conio.h>

int main (void)
{ 
int num,i,a=0;

printf("Introduce un numero: ");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
    if(num%i==0)
    a++;
}
if(a==2)
	printf("El numero es primo");
else
    printf("El numero es compuesto");

getch();
}
