#include <stdio.h> 
#include <conio.h> 

int main (void)
{
float cal;


printf("ingrese la calificion \n \n");

scanf("%f",&cal);



if(cal>101)	
		printf("ingreso un valor erroneo");

		else
			if(cal<101)
			if(cal>89)	
				printf("exelente");
			
			else
				if(cal<90)	
				if(cal>79)
					printf("buena");
				
				else
					if(cal<80)
					if(cal>69)
						printf("regular");

					else
						if(cal<70)
						if(cal>1)
							printf("reprobatoria");
						
						else
							printf("ingreso un valor erroneo");
							
				
					
getch();					
	
}
