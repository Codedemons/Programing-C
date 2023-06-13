  #include<stdio.h>
  #include<conio.h>
   int main (void)
   {
   	int j;
   	printf("Bienvenido al programa. \n\n");
   	   
	printf("Ingrese un numero del 1 al 7.");
   	scanf("%d",&j);
   	    
    if(j==1)
		printf("Es Lunes");
	else
		if(j==2)
			printf("Es martes");  
		else
		 	if(j==3)
		  		printf("Es Miercoles"); 
		 	else
		   		if(j==4)
		   			printf("Es Jueves");  
		 		else
		   			if(j==5)   
		  				printf("Es Viernes");
					else
	    				if(j==6)
		 					printf("Es Sabado");	
						else
							if(j==7)
		 						printf("Es Domingo");
		 					else
		 						printf("No existe ese día");
		
		getch();		 	 	  		
   }               
