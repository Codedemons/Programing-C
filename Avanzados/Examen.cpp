#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

struct lista_doble
{
	int rfc;
	char nombre[25];
	char apellido[25];
	char edad[3];
	char sexo[10];
	char direccion[20];
	int telefono;
	struct lista_doble*li;
	struct lista_doble*ld;
	struct lista_doble *siguiente;
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
void eliminar_nodo(void);
void insertar_final(void);

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
			case 6 :eliminar_nodo(); getch(); break;
			case 7 :insertar_final(); getch(); break;

	default: printf("\n \n \t \t \t \t Opcion Invalida \n \n \t \t \t \t Adios...");
		getch();
		}
		system("cls");
	}
	while(opcion!=8);
	getch();
	
}
void menu (void)
{
	printf("\n \n");
	printf("\t \t \t \t \t MENUS DE LISTA  \n");
	printf("\t \t \t \t ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t 1-Insertar \n");
	printf("\t \t \t \t----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t 2-Derecha \n");
	printf("\t \t \t \t----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t 3-Izquierda \n");
	printf("\t \t \t \t----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t 4-Buscar \n");
	printf("\t \t \t \t----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t 5-Modificar \n");
	printf("\t \t \t \t----------------------------");		
	printf("\n \n");
	printf("\t \t \t \t \t 6-Eliminar Nodo \n");
	printf("\t \t \t \t----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t 7-Insertar Final \n");
	printf("\t \t \t \t----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t 8-Salir \n");
	printf("\t \t \t \t----------------------------");
	printf("\n \n");	
	printf("\t \t \t \t \t Ingresa la opcion: ");
}

void insertar(void)
{
	system("color 17");
	
	nuevo=(struct lista_doble*)malloc(sizeof(lista_doble));
	
    printf("\n Ingrese RFC: ");
    scanf("%d",&nuevo->rfc);
    printf("\n Ingrese Nombre: ");
    scanf("%s",&nuevo->nombre);
    printf("\n Ingrese Apellido: ");
    scanf("%s",&nuevo->apellido);
    printf("\n Ingrese Edad: ");
    scanf("%s",&nuevo->edad);
    printf("\n Ingrese Sexo: ");
    scanf("%s",&nuevo->sexo);
    printf("\n Ingrese Direccion: ");
    scanf("%s",&nuevo->direccion);
    printf("\n Ingrese Telefono:");
    scanf("%d",&nuevo->telefono);
	
	while(nuevo->rfc!=0)
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
	
		printf("\n Ingrese RFC: ");
    	scanf("%d",&nuevo->rfc);
    	printf("\n Ingrese Nombre: ");
    	scanf("%s",&nuevo->nombre);
    	printf("\n Ingrese Apellido: ");
    	scanf("%s",&nuevo->apellido);
    	printf("\n Ingrese Edad: ");
    	scanf("%s",&nuevo->edad);
    	printf("\n Ingrese Sexo: ");
    	scanf("%s",&nuevo->sexo);
    	printf("\n Ingrese Direccion: ");
    	scanf("%s",&nuevo->direccion);
    	printf("\n Ingrese Telefono:");
    	scanf("%d",&nuevo->telefono);
    }
}

void derecha(void)
{
	system("color 47");
	
	auxiliar=inicio;
	
	while(auxiliar!=NULL)
	{
		printf("\n RFC: %d",auxiliar->rfc);
		printf("\n Nombre: %s",auxiliar->nombre);
		printf("\n Apellido: %s",auxiliar->apellido);
		printf("\n Edad: %s",auxiliar->edad);
		printf("\n Sexo: %s",auxiliar->sexo);
		printf("\n Direccion: %s",auxiliar->direccion);
		printf("\n telefono: %d",auxiliar->telefono);
	    auxiliar=auxiliar->ld;
	}
}

void izquierda(void)
{
	system("color 17");
	
	auxiliar=fin;
	
	while(auxiliar!=NULL)
	{
		printf("\n RFC: %d",auxiliar->rfc);
		printf("\n Nombre: %s",auxiliar->nombre);
		printf("\n Apellido: %s",auxiliar->apellido);
		printf("\n Edad: %s",auxiliar->edad);
		printf("\n Sexo: %s",auxiliar->sexo);
		printf("\n Direccion: %s",auxiliar->direccion);
		printf("\n telefono: %d",auxiliar->telefono);
	    auxiliar=auxiliar->li;
	}
}

void buscar(void)
{
	system("color 47");
	
	printf("\n Ingresa RFC a buscar: ");
	scanf("%d",&valor);
	auxiliar=inicio;
	while(auxiliar!=NULL)
	{
		if(valor==auxiliar->rfc)
		{
		printf("\n RFC: %d",auxiliar->rfc);
		printf("\n Nombre: %s",auxiliar->nombre);
		printf("\n Apellido: %s",auxiliar->apellido);
		printf("\n Edad: %s",auxiliar->edad);
		printf("\n Sexo: %s",auxiliar->sexo);
		printf("\n Direccion: %s",auxiliar->direccion);
		printf("\n telefono: %d",auxiliar->telefono);
		}
		auxiliar=auxiliar->ld;
	}
}

void modificar(void)
{
	
	printf("\n Ingresa RFC a modificar: ");
	scanf("%d",&valor);
	
	auxiliar=inicio;
	while(auxiliar!=NULL)
	{
		if(valor==auxiliar->rfc)
		{
        printf("\n Ingrese RFC: ");
        scanf("%d",&auxiliar->rfc);
        printf("\n Ingrese Nombre: ");
        scanf("%s",&auxiliar->nombre);
        printf("\n Ingrese Apellido: ");
        scanf("%s",&auxiliar->apellido);
        printf("\n Ingrese Edad: ");
        scanf("%s",&auxiliar->edad);
        printf("\n Ingrese Sexo: ");
        scanf("%s",&auxiliar->sexo);
        printf("\n Ingrese Direccion: ");
        scanf("%s",&auxiliar->direccion);
        printf("\n Ingrese Telefono:");
        scanf("%d",&auxiliar->telefono);
    	}
	 auxiliar=auxiliar->ld;
	 
	}
}

void eliminar_nodo(void)
{
	system("color 47");
	
	auxiliar=inicio;
	anterior=inicio;
	printf("Ingrese RFC a eliminar: ");
	scanf("%d",&valor);	
	
	while(auxiliar!=NULL&&auxiliar->rfc!=valor)
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

void insertar_final (void)
{
	system("color 17");
	
	nuevo=(struct lista_doble *)malloc(sizeof(struct lista_doble));

    printf("\n Ingrese RFC: ");
    scanf("%d",&nuevo->rfc);
    printf("\n Ingrese Nombre: ");
    scanf("%s",&nuevo->nombre);
    printf("\n Ingrese Apellido: ");
    scanf("%s",&nuevo->apellido);
    printf("\n Ingrese Edad: ");
    scanf("%s",&nuevo->edad);
    printf("\n Ingrese Sexo: ");
    scanf("%s",&nuevo->sexo);
    printf("\n Ingrese Direccion: ");
    scanf("%s",&nuevo->direccion);
    printf("\n Ingrese Telefono:");
    scanf("%d",&nuevo->telefono);
        
	while(nuevo->rfc!=0)
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
		nuevo->ld=NULL;
		nuevo->li=fin;
		fin->ld=nuevo;
		fin=nuevo;
	}
		nuevo=(struct lista_doble *) malloc (sizeof(struct lista_doble));

    printf("\n Ingrese RFC: ");
    scanf("%d",&nuevo->rfc);
    printf("\n Ingrese Nombre: ");
    scanf("%s",&nuevo->nombre);
    printf("\n Ingrese Apellido: ");
    scanf("%s",&nuevo->apellido);
    printf("\n Ingrese Edad: ");
    scanf("%s",&nuevo->edad);
    printf("\n Ingrese Sexo: ");
    scanf("%s",&nuevo->sexo);
    printf("\n Ingrese Direccion: ");
    scanf("%s",&nuevo->direccion);
    printf("\n Ingrese Telefono:");
    scanf("%d",&nuevo->telefono);
	}
}

