#include<stdio.h>
  #include<conio.h>
   int main (void)
   {
   	int j;
   	printf("Bienvenido al programa. \n\n");
   	   
	printf("Ingrese un numero del 1 al 12.");
   	scanf("%d",&j);
   	    
    if(j==1)
		printf("Es Enero");
	else
		if(j==2)
			printf("Es Febrero");  
		else
		 	if(j==3)
		  		printf("Es Marzo"); 
		 	else
		   		if(j==4)
		   			printf("Es Abril");  
		 		else
		   			if(j==5)   
		  				printf("Es Mayo");
					else
	    				if(j==6)
		 					printf("Es Junio");	
						else
							if(j==7)
		 						printf("Es Julio");
		 					else
								if(j==8)
									printf("Es Agosto");  
								else
		 							if(j==9)
		  								printf("Es Septiembre"); 
		 							else
		   								if(j==10)
		   									printf("Es Octubre");  
		 								else
		   									if(j==11)   
		  										printf("Es Noviembre");
											else
	    										if(j==12)
		 											printf("Es Diciembre");	
												else
		 											printf("No existe ese Mes Del Año");
	getch();	 																					
   }
   
