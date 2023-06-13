#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main (void)

{

	float valor_buscar, valor, calificacion [5];
	int i, encontro;
	system("color 0A");
	
	for (i=0; i<5; i++)
	{
		printf("\n\t\t\t\t Ingrese valor  %i:  ",i+1);
		scanf("%f",&calificacion[i]);
	}
	
	for (i=0; i<5; i++)
	{
		printf("\n\t\t\t\t Valor[%i]=%f",i+1,calificacion[i]);
	}

printf("\n\t\t\t\t De el numero que desea buscar:  ");
scanf("%f", &valor_buscar);

for (i=0; i<5; i++)
{
	if (calificacion[i]==valor_buscar)
	{
		printf("\n\t\t\t\t Si existe el numero");
	}else
	printf("\n\t\t\t\t No existe");
}

printf("\n\t\t\t\t De el numero que desea buscar:  ");
scanf("%f", &encontro);

for (i=0; i<5; i++)
{
	if(calificacion [i] == valor_buscar)
	encontro=i;
	else
	encontro = -1;
}
if(encontro>=0)
 	printf("\n\t\t\t\t Valor en posicion:  %i", encontro);
 	else
 	printf("\n\t\t\t\t Valor no encontrado");
 	
 	for (i=0; i<5; i++)
{
	if(calificacion[i]==valor_buscar)
	{
		encontro=i;
		valor=calificacion[i];
	}
	else
	encontro=-1;
}
if(encontro >=0)
printf("\n\t\t\t\t Valor:%f en posicion: %i", valor,encontro);
else
printf("\n\t\t\t\t Valor no encontrado");
getch();
 }
