#include <stdio.h> 
#include <conio.h> 

int main (void)
{
float v1, v2, r;
char op;

printf("que operacion deresa relaizar: para suma(+)para resta(-)para multiplicacion(*)y para divicion(/) \n");
scanf("%c",&op);

printf("cual es el primer valor");
scanf("%f",&v1);

printf("cual es el segundo valor");
scanf("%f",&v2);

if(op=='+')	
	{
		r=v1+v2;
		printf("el resultado de la suma es %f",r);
	}
		else
			if(op=='-')	
			{
				r=v1-v2;
				printf("el resultado de la resta es %f",r);
			}
			
			else
				if(op=='*')	
				{
					r=v1*v2;
					printf("el resultado de la multiplicacion es %f",r);
				}
				
				else
					if(op=='/')	
					{
						r=v1/v2;
						printf("el resultado de la divicion es %f",r);
					}
					
getch();					
	
}
