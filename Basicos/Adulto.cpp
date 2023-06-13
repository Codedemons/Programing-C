#include<stdio.h>
#include<conio.h>

int main (void)
{
	float edad;
	
	printf("Dame tu edad : ");
	scanf("%f",&edad);
	
		if(edad>=18)//Si_verdadero
    printf("Eres un adulto");

    	else//No_falso
    printf("Eres un morro");
    
	getch();
}
