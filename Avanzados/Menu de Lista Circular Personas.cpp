#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

struct lista_circular
{
	int rfc;
	char nombre[25];
	char apellido[25];
	char edad[3];
	char sexo[10];
	char direccion[20];
	int telefono;
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
void eliminar_nodo (void);
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
			case 1 :llenado(); getch(); break;
			case 2 :imprimir(); getch(); break;
			case 3 :buscar(); getch(); break;
			case 4 :modificar(); getch(); break;
			case 5 :eliminar_nodo(); getch(); break;
			case 6 :insertar_final(); getch(); break;
	default: printf("\t \t \t \t Opcion Invalida \n \n \t \t \t \t Adios...");
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
	printf("\t \t \t \t  5-Eliminar Nodo \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  6-Insertar Final \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t  7-Salir \n");
	printf("\t \t \t     ----------------------------");
	printf("\n \n");	
	printf("\t \t \t \t  Ingresa la opcion: ");
}

//LLENADO
void llenado(void)
{
	system("color 17");
	nuevo=(struct lista_circular*)malloc(sizeof(struct lista_circular));
	
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
			inicio->siguiente=inicio;
		}
		else
		{
			nuevo->siguiente=inicio->siguiente;
		    inicio->siguiente=nuevo;
    	}
		nuevo=(struct lista_circular*)malloc(sizeof(struct lista_circular));
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
			printf("\n RFC: %d",auxiliar->rfc);
			printf("\n Nombre: %s",auxiliar->nombre);
			printf("\n Apellido: %s",auxiliar->apellido);
			printf("\n Edad: %s",auxiliar->edad);
			printf("\n Sexo: %s",auxiliar->sexo);
			printf("\n Direccion: %s",auxiliar->direccion);
			printf("\n Telefono: %d",auxiliar->telefono);
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
	
	printf("\n Ingresa RFC a buscar: ");
	scanf("%d",&valor);
	
	auxiliar=inicio;
	do
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
		auxiliar=auxiliar->siguiente;
	}	
	while(auxiliar!=inicio);
}


//MODIFICAR
void modificar(void)
{
	system("color 47");
	
	printf("\n Ingresa RFC a modificar: ");
	scanf("%d",&valor);
	
	auxiliar=inicio;
	do
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
		auxiliar=auxiliar->siguiente;
	}
	while(auxiliar!=inicio);
}


//ELIMINAR NODO
void eliminar_nodo (void)
{
	system("color 17");
	
	int valor;
	int tnodos=0;
	
	printf("\n Ingresa RFC a eliminar: ");
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
			while((auxiliar->siguiente!=inicio)&&(valor!=auxiliar->rfc));
			
			printf("anterior=%d \n", anterior->rfc);
			printf("auxiliar=%d \n", auxiliar->rfc);
			
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

// INSERTAR FINAL
void insertar_final (void)
{
	system("color 47");
	nuevo=(struct lista_circular*)malloc(sizeof(struct lista_circular));

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
    printf("\n Ingrese Telefono: ");
    scanf("%d",&nuevo->telefono);
        
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
		do
		{
			auxiliar=auxiliar->siguiente;
		}
		while(auxiliar->siguiente!=inicio);
		nuevo->siguiente=auxiliar->siguiente;
		auxiliar->siguiente=nuevo;
	}
	nuevo=(struct lista_circular*)malloc(sizeof(struct lista_circular));

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
    printf("\n Ingrese Telefono: ");
    scanf("%d",&nuevo->telefono);
	}while(nuevo->rfc!=0);
}


