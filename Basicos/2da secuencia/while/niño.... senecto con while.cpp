//este programa sirve para determinar si eres un adulto 

#include <stdio.h>
#include <conio.h>


int main( void)



{
int edad;

printf("ingrese su edad:\n");	
scanf("%i",&edad);	

while(edad<=100 &&edad>0)
{
if( edad>=1) 
if( edad<=10) 
	printf("niño\n");
	else 
		if( edad>=11) 
		if( edad<=17) 
			printf("joven\n");
			else 
				if( edad>=18) 
				if( edad<=55) 
					printf("adulto\n");
					else 
						if( edad>=1) 
						if( edad<=10) 
							printf("niño\n");
							 

printf("ingrese su edad: \n");	
scanf("%i",&edad);								

}

  getch ();

}
