#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define tope 5

struct lista_cola
{
	int clave;
	struct lista_cola *siguiente;
};

int valor=0;

struct lista_cola *auxiliar;
struct lista_cola *nuevo;
struct lista_cola *inicio;
struct lista_cola *anterior;
	
void colar (void);
void descolar (void);
void imprimir (void);
void menu (void);

int main (void)
{
	int opcion;
	system("color 0A");
	do
	{
		menu();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1 :colar(); imprimir(); break;
			case 2 :descolar(); imprimir(); break;
			default: printf("\t \t \t \t Opcion Invalida \n \n \t \t \t \t Adios...");
			getch();
		}
		system("cls");
	}
	while(opcion!= 3);
	getch();
}
void menu (void)
{
	printf("\n \n");
	printf("\t \t \t \t  MENUS DE LISTA PILA  \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  1-Colar \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  2-Descolar \n");
	printf("\t \t \t     ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t  3-Salir \n");
	printf("\t \t \t     ----------------------------");	
	printf("\n \n");	
	printf("\t \t \t \t  Ingresa la opcion: ");
}

//Imprimir
void imprimir(void)
{
	system("color 17");
	auxiliar=inicio;
	while(auxiliar!=NULL)
	{
		printf("\n %d",auxiliar->clave);
		auxiliar=auxiliar->siguiente;
	}
	getch();
}

//Colar
void colar(void)
{
	system("color 47");
	valor++;
	if(valor<=tope)
	{
		nuevo=(struct lista_cola*)malloc(sizeof(struct lista_cola));
		nuevo->clave=valor;
		nuevo->siguiente=inicio;
		inicio=nuevo;
	}
	else
	{
		printf("SU COLA ESTA LLENA");
	}
}

//Desacolar
void descolar(void)
{
	system("color 17");
	if(inicio==NULL)
	printf("COLA VACIA");	
	else
	{
		if(valor>=1)
		{
			auxiliar=inicio;
			inicio=auxiliar->siguiente;
			free(auxiliar);
			valor--;
		}
	}	
}

