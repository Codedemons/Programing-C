#include <stdio.h>
#include <conio.h>
 
int main (void)
{
	
	int horas, minutos, segundos;
	
	for(horas=0; horas<24; horas++)
	{
	
		for(minutos=0; minutos<60; minutos++)
		{
		
		
			for(segundos=0; segundos<60; segundos++)
			{printf("%d-%d-%d \n",horas, minutos, segundos);
			
			}
				
		}
				
	}
		
	
	
	
	getch();
	
}


