#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (void)
{
	float valor_buscar, valor, calificacion[5],nv;
	int i, encontro=-1;	
	system("color 0A");							
	
	
	for(i=0;i<5;i++)
	{
	
	printf("\n\t\t\t\t Dame el valor  %i: ",i+1);
	scanf("%f",&calificacion[i]);
	
	}

	
	for(i=0;i<5;i++)
	{
	printf("valor [%d]= %f \n",i+1,calificacion[i]);
	
	}	

	printf("\n\t\t\t\t Dame el numero que desea buscar: ");
	scanf("%f",&valor_buscar);
	
	
	for(i=0; i<5; i++)
	{ 
    if (calificacion[i]==valor_buscar)
    {
		encontro=i;
    	valor=calificacion[i];
	}

	} 
	
	if(encontro>=0)
		printf("\n\t\t\t\t Valor en posicion: %d con valor: %f",encontro,valor);
	else
		printf("\n\t\t\t\t Valor no encontrado");	
	
	
	
	printf("\n\t\t\t\t Dame el valor a modificar: ");
	scanf("%f",&valor_buscar);

	for(i=0;i<5;i++)
	{ 
    if (calificacion[i]==valor_buscar)
    {
    	printf("\n\t\t\t\t Dame el valor: ");
    	scanf("%f",&calificacion[i]);
	}	
										
	} 
	

	for(i=0;i<5;i++)
	{
	
	printf("\n\t\t\t\t Valor [%d]= %f \n",i+1,calificacion[i]);
	
	}
		printf("\n\t\t\t\t Dime el valor a eliminar: ");
	scanf("%f",&valor_buscar);

	for(i=0;i<5;i++)
	{ 
    if (calificacion[i]==valor_buscar)
    {
    	calificacion[i]=0;
	}	
	} 
	

	for(i=0;i<5;i++)
	{
	
	printf("\n\t\t\t\t Valor [%d]= %f \n",i+1,calificacion[i]);
	
	}
		
		
getch();
}
