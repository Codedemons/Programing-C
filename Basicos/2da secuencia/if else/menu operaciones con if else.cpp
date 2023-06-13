#include <stdio.h> 
#include <conio.h> 

int main (void)
{
float v1, v2, r;
int op;

printf("elija la operacion a relizar \n \n");

printf("1.suma \n");
printf("2.resta \n");
printf("3.multipliccion\n");
printf("4.divicion \n");
scanf("%i",&op);



printf("cual es el primer valor");
scanf("%f",&v1);

printf("cual es el segundo valor");
scanf("%f",&v2);




if(op==1)	
	{
		r=v1+v2;
		printf("el resultado de la suma es %f",r);
	}
		else
			if(op==2)	
			{
				r=v1-v2;
				printf("el resultado de la resta es %f",r);
			}
			
			else
				if(op==3)	
				{
					r=v1*v2;
					printf("el resultado de la multiplicacion es %f",r);
				}
				
				else
					if(op==4)	
					{
						r=v1/v2;
						printf("el resultado de la divicion es %f",r);
					}
					
getch();					
	
}
