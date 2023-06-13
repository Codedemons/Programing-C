#include<stdio.h>
#include<conio.h>
int main(void)
{
	float cal;
	printf("Este programa te ayudara a saber que tan buena fue tu calificacion :)\n");
	printf("ingresa tu calificacion: \n");
	scanf("%f",&cal);
	if(cal<0)
		printf("no valido");
	else
		if(cal<=69)
			printf("reprobado");
		else
			if(cal<=80)
				printf("regular");
			else
				if(cal<=90)
					printf("buena");
				else
					if(cal<=100)
						printf("excelente");
					else
						printf("no valido");
	getch();
}
