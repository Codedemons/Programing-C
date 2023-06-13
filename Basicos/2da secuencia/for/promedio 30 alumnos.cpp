#include <conio.h>
#include <stdio.h>

int main (void)
{
int I;
float P, C;
float S=0;	

printf("ingrese el promedio");

for(I=0; I<5; I++)
{
scanf("%f",&C);
S=S+C;
 	
}
P=S/5;
printf("el promedio es igual %f",P);
getch();
}
