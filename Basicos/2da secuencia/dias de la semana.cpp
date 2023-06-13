#include <stdio.h>
#include <conio.h>


int main (void)

{
	
int N;

printf("ingrese el Numero para determinar el dia de la semana :     ");
scanf("%i",&N);


if(N==1)
   printf("lunes");
else 
	if(N==2)
		printf("martes");
else
	if(N==3)
		printf("miercoles");
else   
	if(N==4)
		printf("jueves");
else
	if(N==5)
		printf("viernes");
else
	if(N==6)
		printf("sabado");
else
	if(N==7)
		printf("domingo");              



getch ();
}

