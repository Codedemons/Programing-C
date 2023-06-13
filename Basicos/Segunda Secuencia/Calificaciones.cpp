#include<stdio.h>
#include<conio.h>
int main(void)
{
	float calf;
	
	printf("Ingresa tu calificacion: \n");
	scanf("%f",&calf);
	if(calf<0)
		printf("No valido");
	else
		if(calf<=100)
			printf("Excelente");
		else
			if(calf<=90)
				printf("Buena");
			else
				if(calf<=80)
					printf("Regular");
				else
					if(calf<=69)
						printf("Reprobado");
					else
						printf("No valido");
	getch();
}
