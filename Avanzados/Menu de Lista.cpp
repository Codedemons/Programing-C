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
	
void menu (void);
void llenado (void);
void imprimir (void);
void buscar (void);
void modificar (void);
void eliminar (void);

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
			case 5 :eliminar(); getch(); break;
	default: printf("\t \t \t \t \t \t \t \t \t Opcion Invalida \n \n \t \t \t \t \t \t \t \t \t Adios...");
		getch();
		}
		system("cls");
	}
	while(opcion!= 6);
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
	printf("\t \t \t \t \t \t \t \t \t Ingresa la opcion: ");
}

void llenado(void)
{
	system("color 17");
	nuevo= NULL;
	inicio= NULL;

	for(i=0; i<c; i++)
	{
	nuevo=(struct lista *) malloc (sizeof(struct lista));
		
	printf("\n Ingrese dato: ");
	scanf("%d",&nuevo->clave);
		
	nuevo->siguiente=inicio;
	inicio=nuevo;
	}
	auxiliar=inicio;
}

void imprimir(void)
{	
	system("color 47");
	for(i=0; i<5; i++)
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
	
	for(i=0; i<5; i++)
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
	
	for(int i=0; i<5; i++)
	{
		if(valor==auxiliar->clave)
		{
			printf("\n Ingresa nuevo dato:");
			scanf("%d",& auxiliar->clave);
		}
		auxiliar=auxiliar->siguiente; 
	}
    auxiliar=inicio;
    
    for(int i=0; i<5; i++)
    {
    	printf("\n %d",auxiliar->clave);
    	auxiliar=auxiliar->siguiente; 
	}
}

void eliminar(void)
{
	system("color 17");
	printf("\n Ingresa dato a eliminar:");
	scanf("%d",&valor);
	
	auxiliar=inicio; 
		
	for(int i=0; i<5; i++)
		{
	 	if(valor==auxiliar->clave)
	 		{
		 		auxiliar->clave=0;	
			}
		auxiliar=auxiliar->siguiente;
		}
		auxiliar=inicio;
        for( i=0; i<5; i++)
        {
    	printf("\n %d",auxiliar->clave);
    	auxiliar=auxiliar->siguiente; 
     	}
}
