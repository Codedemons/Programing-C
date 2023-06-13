#include<stdio.h>
#include<conio.h>
 
   int main (void)
{
   	char L;

   	printf("Ingrese una letra: ");
   	scanf("%c",&L);
   	
    if(L=='a')
		printf("Es una vocal");

	else
		if(L=='e')
			printf("Es una vocal");  
	
		else
		 	if(L=='i')
		  		printf("Es una vocal"); 
		 
		 	else
		   		if(L=='o')
		   			printf("Es una vocal");  
		 	
			 	else
		   			if(L=='u')   
		  				printf("Es una vocal");
				
					else
	    				if(L=='A')
		 					printf("Es una vocal");	
					
						else
							if(L=='E')
		 						printf("Es una vocal");
		 					
							 else
								if(L=='I')
									printf("Es una vocal");  
							
								else
		 							if(L=='O')
		  								printf("Es una vocal"); 

		 							else
		   								if(L=='U')
		   									printf("Es una vocal");  
		 							
									 	else
										 	printf("No es una vocal");
	getch();										 	
}
