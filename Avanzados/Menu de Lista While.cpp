#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

struct lista
{
	int clave;
	struct lista *siguiente;
};


	int i;
	int c=5;
	int valor;
	struct lista *auxiliar;
	struct lista *nuevo;
	struct lista *inicio;
	struct lista *anterior;
	
void menu (void);
void llenado (void);
void imprimir (void);
void buscar (void);
void modificar (void);
void eliminar_nodo (void);
void insertar_final (void);

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
			case 5 :eliminar_nodo(); getch(); break;
			case 6 :insertar_final(); getch (); break;
	default: printf("\t \t \t \t \t \t \t \t \t Opcion Invalida \n \n \t \t \t \t \t \t \t \t \t Adios...");
		getch();
		}
		system("cls");
	}
	while(opcion!= 7);
	getch();
	
}
void menu (void)
{
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t MENUS DE LISTA  \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 1-Llenado \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2-Imprimir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 3-Buscar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 4-Modificar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 5-Eliminar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");		
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 6-Insertar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 7-Salir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");	
	printf("\t \t \t \t \t \t \t \t \t Ingresa la opcion: ");
}

void llenado(void)
{
	system("color 17");
	nuevo=(struct lista*)malloc(sizeof(struct lista));
	printf("\n Ingrese dato: ");
	scanf("%d",&nuevo->clave);
	
	while(nuevo->clave!=0)
	{
	 if(inicio==NULL)
		{
	 	nuevo->siguiente=NULL;
	 	inicio=nuevo;
	 	}
		else
	{
		nuevo->siguiente=inicio;
	    inicio=nuevo;
    }
    	nuevo=(struct lista*)malloc(sizeof(struct lista));
        printf("\n Ingrese dato: ");
        scanf("%d",&nuevo->clave);
	}
}

void imprimir(void)
{
	system("color 47");
	auxiliar=inicio;
	
	while(auxiliar!=NULL)
	{
		printf("\n %d",auxiliar->clave);
	    auxiliar=auxiliar->siguiente;
	}
}

void buscar(void)
{
	system("color 17");
	printf("\n Ingresa dato a buscar: ");
	scanf("%d",&valor);
	auxiliar=inicio;
	while(auxiliar!=NULL)
	{
		if(valor==auxiliar->clave)
		printf("\n Si se encuentra");
		else
        printf("\n No se encuentra");
		auxiliar=auxiliar->siguiente;
	}
}

void modificar(void)
{
	system("color 47");
	printf("\n Ingresa dato a modificar: ");
	scanf("%d",&valor);
	
	auxiliar=inicio;
	while(auxiliar!=NULL)
	{
		if(valor==auxiliar->clave)
		{
		printf("\n Ingresa nuevo dato: ");
		scanf("%d",&auxiliar->clave);
    	}
	 auxiliar=auxiliar->siguiente;
	 
	}
}

void eliminar_nodo (void)
{
	system("color 47");
	printf("\n Ingresa dato a eliminar: ");
	scanf("%d",&valor);
	if(inicio==NULL)
		printf("\n No hay elementos");
		else
		{
			anterior=inicio;
			auxiliar=inicio;		
			while(auxiliar!=NULL&auxiliar->clave!=valor)
			{
			anterior=auxiliar;
			auxiliar=auxiliar->siguiente;	
			}
			if(auxiliar!=NULL&&auxiliar->clave==valor)
			{
				if(anterior==auxiliar)
				inicio=auxiliar->siguiente;
				else
				anterior->siguiente=auxiliar->siguiente;
			}
		}
		free(auxiliar);
getch();
}

void insertar_final (void)
{
	system("color 17");
	
	
	nuevo=(struct lista*)malloc(sizeof(struct lista));

	printf("Da valor: ");
	scanf("%d",&nuevo->clave);
	while(nuevo->clave!=0)
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
	nuevo=(struct lista*)malloc(sizeof(struct lista));

	printf("Da valor: ");
	scanf("%d",&nuevo->clave);
	}
}

