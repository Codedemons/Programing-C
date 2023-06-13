#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

struct lista
{
	int rfc;
	char nombre[25];
	char apellido[25];
	char edad[3];
	char sexo[10];
	char direccion[20];
	int telefono;
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
	printf("\t \t \t \t \t \t \t \t \t \t MENU  \n");
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
    printf("\n Ingrese RFC:");
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
	 	nuevo->siguiente=NULL;
	 	inicio=nuevo;
	 	}
		else
	{
		nuevo->siguiente=inicio;
	    inicio=nuevo;
    }
    	nuevo=(struct lista*)malloc(sizeof(struct lista));
        printf("\n Ingrese RFC:");
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

void imprimir(void)
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
	    auxiliar=auxiliar->siguiente;
	}
}

void buscar(void)
{
	system("color 17");
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
		auxiliar=auxiliar->siguiente;
	}
}

void modificar(void)
{
	system("color 47");
	printf("\n Ingresa RFC a modificar: ");
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
	 auxiliar=auxiliar->siguiente;
	 
	}
}

void eliminar_nodo (void)
{
	system("color 17");
	printf("\n Ingresa RFC a eliminar: ");
	scanf("%d",&valor);
	if(inicio==NULL)
		printf("\n No hay elementos");
		else
		{
			anterior=inicio;
			auxiliar=inicio;		
			while(auxiliar!=NULL&auxiliar->rfc!=valor)
			{
			anterior=auxiliar;
			auxiliar=auxiliar->siguiente;	
			}
			if(auxiliar!=NULL&&auxiliar->rfc==valor)
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
	system("color 47");
	
	
	nuevo=(struct lista*)malloc(sizeof(struct lista));

    printf("\n Ingrese RFC:");
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

    printf("\n Ingrese RFC:");
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


