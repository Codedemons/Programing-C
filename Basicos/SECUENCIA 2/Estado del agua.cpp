d#include <stdio.h>
#include<conio.h>

int main(void)

{
	float agua;
	
	printf ("ingresar la temperatura del agua: ");
    scanf("%f",&agua);
    
    
    if(agua<0)
		printf("El agua esta en estado solido");
	else
		if (agua>100)
			printf("El agua esta en estado gaceoso");
		else 
			printf("El agua esta en estado liquido");

			
getch();
}
