#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

struct lista_doble
{
	int clave;
	struct lista_doble*li;
	struct lista_doble*ld;
};


	int i;
	int c=5;
	int valor;
	struct lista_doble*inicio;
	struct lista_doble*nuevo;
	struct lista_doble*fin;
	struct lista_doble*auxiliar;
	struct lista_doble*anterior;
	
void menu (void);
void insertar (void);
void derecha (void);
void izquierda (void);
void buscar (void);
void modificar (void);
void eliminar(void);


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
			case 1 :insertar(); getch(); break;
			case 2 :derecha(); getch(); break;
			case 3 :izquierda(); getch(); break;
			case 4 :buscar(); getch(); break;
			case 5 :modificar(); getch(); break;
			case 6 :eliminar(); getch(); break;

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
	printf("\t \t \t \t \t \t \t \t \t 1-Insertar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2-Derecha \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 3-Izquierda \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 4-Buscar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 5-Modificar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");		
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 6-Eliminar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");		
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 7-Salir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");	
	printf("\t \t \t \t \t \t \t \t \t Ingresa la opcion: ");
}

void insertar(void)
{
	system("color 17");
	nuevo=(struct lista_doble*)malloc(sizeof(lista_doble));
	
	printf("Ingresa dato: ");
	scanf("%d", & nuevo->clave);
	
	while(nuevo->clave!=0)
	{
		if(inicio==NULL)
		{
			inicio=nuevo;
			fin=nuevo;
			nuevo->li=NULL;
			nuevo->ld=NULL;
		}
		else
		{
			nuevo->ld=inicio;
			inicio->li=nuevo;
			inicio=nuevo;
			inicio->li=NULL;
		}
		
		nuevo=(struct lista_doble*)malloc(sizeof(lista_doble));
	
		printf("Ingresa dato: ");
		scanf("%d", & nuevo->clave);
    }
}

void derecha(void)
{
	system("color 47");
	auxiliar=inicio;
	
	while(auxiliar!=NULL)
	{
		printf("%d", auxiliar->clave);
		auxiliar=auxiliar->ld;
	}
}

void izquierda(void)
{
	system("color 17");
	auxiliar=fin;
	
	while(auxiliar!=NULL)
	{
		printf("%d", auxiliar->clave);
		auxiliar=auxiliar->li;
	}
}

void buscar(void)
{
	system("color 47");
	printf("Ingresa dato a buscar: ");
	scanf("%d", & valor);
	
	auxiliar=inicio;
	
	while(auxiliar!=0)
	{
		if(valor==auxiliar->clave)
			printf("Si se encuentra");
			
		auxiliar=auxiliar->ld;
	}
}

void modificar(void)
{
	system("color 17");
	printf("Ingresa dato a modificar: ");
	scanf("%d", & valor);
	
	auxiliar=inicio;
	
	while(auxiliar!=0)
	{
		if(valor==auxiliar->clave)
		{
			printf("\n Ingresa nuevo dato: ");
			scanf("%d",& auxiliar->clave);
		}
		auxiliar=auxiliar->ld;
	}
}

void eliminar(void)
{
	system("color 17");
	
	auxiliar=inicio;
	anterior=inicio;
	printf("Ingresa dato a borrar:");
	scanf("%d",& valor);
	
	while(auxiliar!=NULL && auxiliar->clave!=valor)
	{
		anterior=auxiliar;
		auxiliar=auxiliar->ld;
	}
	if(auxiliar==anterior)
	{
		auxiliar=auxiliar->ld;
		auxiliar->li=NULL;
		inicio=auxiliar;
		free(anterior);
	}
	else
	if(auxiliar->ld==NULL)
	{
		fin=auxiliar->li;
		fin->ld=NULL;
		free(auxiliar);
	}
	else
	{
		anterior->ld=auxiliar->ld;
		anterior=auxiliar->ld;
		anterior->li=auxiliar->li;
		free(auxiliar);
	}

}


