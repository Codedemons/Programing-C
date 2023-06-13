#include <stdio.h>
#include <conio.h>

int main (void)

{
	
	int edad;
	
	
	printf("Dame la edad: ");
	scanf("%d", & edad);
	
	while (edad>0 and edad<=100)
	{
		
		if(edad<101 and edad>55)
			printf("La persona es Senecto\n");
		
		else
			if(edad<56 and edad>17)
				printf("La persona es Adulto\n");
			else
				if(edad<18 and edad>10)
					printf("La persona es Joven\n");
						else
							{printf("La persona es Niño\n");}
		
		
		printf("Desea dar otra edad?");
		scanf("%d",&edad);
	
	}
	
	getch ();
	
	}
	

