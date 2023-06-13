#include<stdio.h>
#include<conio.h>

int main (void)

{
	int num;
	
	printf("Dame un numero del 1-7 ");
	scanf("%d",&num);
	
	if(num==1)
		printf("El dia es lunes");

	else
  		if(num==2)
  			printf("El dia el martes");
  		
		else
			if(num==3)
				printf("El dia es miercoles");
			
			else
				if(num==4)	
					printf("El dia es jueves");
				
				else
					if(num==5)
						printf("El dia es viernes");
						
					else 
						if(num==6)
							printf("El dia es sabado");
						
						else
							printf("El dia es domingo");
							

getch();
	
	
}
