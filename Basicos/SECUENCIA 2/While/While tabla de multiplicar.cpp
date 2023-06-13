#include <stdio.h>
#include <conio.h>

int main (void)

{
	
	int edad;
	
	
	printf("Dame la edad: ");
	scanf("%d", & edad);
	
	while (edad>0&&edad<=100)
	{
		
		if(edad<101 and edad>55)
			printf("La persona es Senecto");
		
		if(edad<56 and edad>17)
			printf("La persona es Adulto");
		
		if(edad<18 and edad>10)
			printf("La persona es Joven");
		else
			{printf("La persona es Niño");}
		
		printf("Desea dar otra edad?");
		scanf("%", edad);
	
	}
	
	getch ();
	
	}
	

