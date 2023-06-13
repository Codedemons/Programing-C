#include<stdio.h>
#include<conio.h>
   int main (void)
   {
   	char c;
   	
   	printf("Bienvenido al programa. \n\n");
   	   
	printf("Ingrese una letra: ");
   	scanf("%c",&c);
   	
    if(c=='a')
		printf("Es una vocal");
	else
		if(c=='e')
			printf("Es una vocal");  
		else
		 	if(c=='i')
		  		printf("Es una vocal"); 
		 	else
		   		if(c=='o')
		   			printf("Es una vocal");  
		 		else
		   			if(c=='u')   
		  				printf("Es una vocal");
					else
	    				if(c=='A')
		 					printf("Es una vocal");	
						else
							if(c=='E')
		 						printf("Es una vocal");
		 					else
								if(c=='I')
									printf("Es una vocal");  
								else
		 							if(c=='O')
		  								printf("Es una vocal"); 
		 							else
		   								if(c=='U')
		   									printf("Es una vocal");  
		 								else
										 	printf("No es una vocal");
	getch();										 	
   }
