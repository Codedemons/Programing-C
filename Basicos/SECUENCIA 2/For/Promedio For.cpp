#include <stdio.h>
#include<conio.h>

int main (void)
{
	float prom, calf;
	float suma=0;
	int cont, alum;
		
		printf("Dame la cantidad de alumnos");
		scanf("%d",&alum);
		
		for(cont=0; cont<alum; cont ++)
		{
		printf("dame la calificacion del alumno");
		scanf("%f",& calf);
		
	    suma=suma+calf;
		}
		
		prom= suma/alum;
		printf("el promedio es:%f", prom);
		
		getch();


}
	
