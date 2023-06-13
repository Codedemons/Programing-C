#include <stdio.h>
#include <conio.h>

int main (void)

{
	
	int I, J, L, M;
	
	for(L=0;L<79; L++)
		{
			printf("*");
		}
	
	printf("*\n");
	
	for(I=0; I<23; I++)
	{
		printf("*");
		
		for (J=0; J<78; J++)
			
			{printf(" ");}
	
		printf("*\n");
	}
		
		
	for(M=0; M<80; M++)
		{printf("*");}
	
	getch ();
	
	}
	

