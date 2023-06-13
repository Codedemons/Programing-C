#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

struct lista_circular
{
	int clave;
	struct lista_circular *siguiente;
};


	int i;
	int c=5;
	int valor;
	struct lista_circular *auxiliar;
	struct lista_circular *nuevo;
	struct lista_circular *inicio;
	struct lista_circular *anterior;
	
void menu (void);
void llenado (void);
void imprimir (void);
void buscar (void);
void modificar (void);
void eliminar_dato (void);
void insertar_final (void);
void eliminar_nodo (void);


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
			case 1 :llenado(); getch(); break;
			case 2 :imprimir(); getch(); break;
			case 3 :buscar(); getch(); break;
			case 4 :modificar(); getch(); break;
			case 5 :eliminar_dato(); getch(); break;
			case 6 :insertar_final(); getch(); break;
			case 7 :eliminar_nodo(); getch(); break;
	default: printf("\t \t \t \t Opcion Invalida \n \n \t \t \t \t Adios...");
		getch();
		}
		system("cls");
	}
	while(opcion!= 8);
	getch();
	
}
void menu (void)
{
	printf("\n \n");
	printf("\t \t \t \t  MENUS DE LISTA CIRCULAR  \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  1-Llenado \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  2-Imprimir \n");
	printf("\t \t \t     ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t  3-Buscar \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  4-Modificar \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  5-Eliminar Dato \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  6-Insertar Final \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  7-Eliminar Nodo \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  8-Salir \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");	
	printf("\t \t \t \t  Ingresa la opcion: ");
}

void llenado(void)
{
	system("color 17");
	nuevo=(struct lista_circular*)malloc(sizeof(struct lista_circular));
	printf("\n Ingrese dato: ");
	scanf("%d",&nuevo->clave);
	
	while(nuevo->clave!=0)
	{
		if(inicio==NULL)
		{
			inicio=nuevo;
			inicio->siguiente=inicio;
		}
		else
		{
			nuevo->siguiente=inicio->siguiente;
		    inicio->siguiente=nuevo;
    	}
		nuevo=(struct lista_circular*)malloc(sizeof(struct lista_circular));
		printf("\n Ingrese dato: ");
		scanf("%d",&nuevo->clave);
	}
}

//IMPRIMIR
void imprimir(void)
{
	system("color 47");
	
	auxiliar=inicio;
	if(auxiliar==NULL)
	{
		printf("No hay elementos");
	}
	else
	{
		do
		{
			printf("%d",auxiliar->clave);
			auxiliar=auxiliar->siguiente;
		}
		while(auxiliar!=inicio);
	}
	getch();
}

//BUSCAR
void buscar(void)
{
	system("color 17");
	printf("\n Ingresa dato a buscar: ");
	scanf("%d",&valor);
	
	auxiliar=inicio;
	do
	{
		if(valor==auxiliar->clave)
		printf("\n Si se encuentra");
		else
        printf("\n No se encuentra");
		auxiliar=auxiliar->siguiente;
	}	while(auxiliar!=inicio);
}

//MODIFICAR
void modificar(void)
{
	system("color 47");
	printf("\n Ingresa dato a modificar: ");
	scanf("%d",&valor);
	
	auxiliar=inicio;
	do
	{
		if(valor==auxiliar->clave)
		{
		printf("\n Ingresa nuevo dato: ");
		scanf("%d",&auxiliar->clave);
    	}
		auxiliar=auxiliar->siguiente;
	}
	while(auxiliar!=inicio);
}

//ELIMINAR
void eliminar_dato (void)
{
	system("color 17");
	
	printf("\n Ingresa dato a eliminar: ");
	scanf("%d",&valor);
	
	auxiliar=inicio;
	do
	{
		if(valor==auxiliar->clave)
		{
			auxiliar->clave=0;
		}
		auxiliar=auxiliar->siguiente;
	}
	while(auxiliar!=inicio);
	
	auxiliar=inicio;
	do
	{
		printf("%d",auxiliar->clave);
		auxiliar=auxiliar->siguiente;
	}
	while(auxiliar!=inicio);
}

//Insertar final
void insertar_final (void)
{
	system("color 17");
	nuevo=(struct lista_circular*)malloc(sizeof(struct lista_circular));

	printf("Ingresa dato: ");
	scanf("%d",&nuevo->clave);
	do
	{
	if(inicio==NULL)
	{
		nuevo->siguiente=inicio;
		inicio=nuevo;
	}
	else
	{
		auxiliar=inicio;
		while(auxiliar->siguiente!=NULL)
		{
			auxiliar=auxiliar->siguiente;
		}
		nuevo->siguiente=auxiliar->siguiente;
		auxiliar->siguiente=nuevo;
	}
	nuevo=(struct lista_circular*)malloc(sizeof(struct lista_circular));

	printf("Ingresa dato: ");
	scanf("%d",&nuevo->clave);
	}
	while(nuevo->clave!=0);
}

//ELIMINAR NODO
void eliminar_nodo (void)
{
	system("color 17");
	
	int valor;
	int tnodos=0;
	
	printf("\n Ingresa dato a eliminar: ");
	scanf("%d",&valor);
	if(inicio==NULL)
		printf("\n No hay elementos");
		else
		{
			auxiliar=inicio;
			anterior=inicio;		
			while(auxiliar->siguiente!=inicio)
			{
				tnodos++;
				auxiliar=auxiliar->siguiente;
			}
			do
			{
				anterior=auxiliar;
				auxiliar=auxiliar->siguiente;
			}
			while((auxiliar->siguiente!=inicio)&&(valor!=auxiliar->clave));
			
			printf("anterior=%d \n", anterior->clave);
			printf("auxiliar=%d \n", auxiliar->clave);
			
			if(auxiliar==inicio)
			{
				inicio=inicio->siguiente;
				anterior->siguiente=auxiliar->siguiente;
			}
			else
			{
				anterior->siguiente=auxiliar->siguiente;
			}
			free(auxiliar);
			if(tnodos==0)
			{
				inicio=NULL;
			}
			
			
		}
}
