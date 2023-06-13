#include <stdio.h>
#include <conio.h>


int main (void)

{
	
int N;

printf("ingrese el Numero para determinar el mes :     ");
scanf("%i",&N);


if(N==1)
	printf("enero");
else
	if(N==2)
		printf("febrero");
	else
		if(N==3)
			printf("marzo");
		else   
	if(N==4)
		printf("abril");
else
	if(N==5)
		printf("mayo");
else
	if(N==6)
		printf("junio");
else
	if(N==7)
		printf("julio");   
else
	if(N==8)
		printf("agosto");
else
	if(N==9)
		printf("septiembre");
else
	if(N==10)
		printf("octubre");
else   
	if(N==11)
		printf("noviembre"); 
else
	if(N==12)
		printf("diciembre");                 



getch ();
}

