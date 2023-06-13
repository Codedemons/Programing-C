#include<stdio.h>
#include<conio.h>

int main (void)
{
	int A, B, R ;
	
	printf("Ingresa el primer numero entero: ");
	scanf("%d",&A); 
	
	printf("Ingresa el segundo numero entero: ");
	scanf("%d",&B); 
	
	if(A>B)
{	
R=A-B;
	
	printf("El resultado es: %d",R);
}
	else
	R=A+B;
	
	printf("El resultado es: %d",R);
	
	 
	getch();
}
