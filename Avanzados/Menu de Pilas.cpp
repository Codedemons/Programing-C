#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define tope 5

struct lista_pila
{
	int clave;
	struct lista_pila *siguiente;
};

	int valor=0;
	struct lista_pila *auxiliar;
	struct lista_pila *nuevo;
	struct lista_pila *inicio;
	struct lista_pila *anterior;
	
void apilar (void);
void desapilar (void);
void imprimir (void);
void menu (void);

int main (void)
{
	int opcion;
	system("color 0A");
	do
	{
		menu();
		scanf(" %d",&opcion);
		switch(opcion)
		{
			case 1 :apilar(); imprimir(); break;
			case 2 :desapilar(); imprimir(); break;
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
	printf("\t \t \t \t  1-Apilar \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  2-Desapilar \n");
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

//Apilar
void apilar(void)
{
	system("color 47");
	valor++;
	if(valor<=tope)
	{
		nuevo=(struct lista_pila*)malloc(sizeof(struct lista_pila));
		nuevo->siguiente=inicio;
		inicio=nuevo;
		nuevo->clave=valor;
	}
	else
	{
		printf("Su pila esta llena");
	}
}

//Desapilar
void desapilar(void)
{
	system("color 17");
	if(inicio==NULL)
	printf("PILA VACIA");	
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

