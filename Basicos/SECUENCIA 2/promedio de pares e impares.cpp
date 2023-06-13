#include <stdio.h>
#include<conio.h>

int main (void)
{
 
int n,i,SP,SI,CP,CI;
float PP,PI;


SP=0; 
SI=0;
CP=0; 
CI=0;




for(i=1; i<=10; i++)
{
printf("Introduce un numero: ");
scanf("%d",&n);	

    if(n%2==0) 
    	{
		SP=SP+n;
		CP++;
		}
    		else
    			{
    			SI=SI+n;
    			CI++;
    			}

}

PP=SP/CP;
PI=SI/CI;

printf("promedio de pares es %f y el promedio de los impares es %f ",PP,PI);


getch();


}


