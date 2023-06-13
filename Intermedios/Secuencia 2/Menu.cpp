#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#define n 2

struct alumno
{
	int matricula;
	char nombre[50];
	int telefono;
}
panteras[n];

	int i;
	int matricula2;
	char nombre2[30];
	char borrar[ ]={" "};

void menu (void);
void llenado (void);
void imprimir (void);
void buscar (void);
void buscar2 (void);
void modificar (void);
void modificar2 (void);
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
			case 4 :buscar2(); getch(); break;
			case 5 :modificar(); getch(); break;
			case 6 :modificar2(); getch(); break;
			case 7 :eliminar(); getch();	break;
	default: printf("\t \t \t \t \t \t \t \t \t Opcion Invalida \n \n \t \t \t \t \t \t \t \t \t Adios...");
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
	printf("\t \t \t \t \t \t \t \t \t MENUS DE DATOS  \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 1-Llenado \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2-Imprimir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 3-Buscar (Matricula)\n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 4-Buscar (Nombre o Apellido)\n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 5-Modificar (Todo) \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 6-Modificar (Por Parte) \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 7-Eliminacion \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 8-Salir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingresa la opcion: ");
}

void llenado(void)
{
	system("color 17");
	for(i=0;i<n;i++)
	{
		printf("Da matricula: ");
		scanf("%d",&panteras[i].matricula);
		getchar();
		printf("Da nombre: ");
		gets(panteras[i].nombre);
		printf("Da telefono: ");
		scanf("%d",&panteras[i].telefono);
	}
}

void imprimir(void)
{	
	system("color 47");
	for(i=0;i<n;i++)
	{
		printf("Matricula: %d \n",panteras[i].matricula);
		printf("Nombre: ");
		puts(panteras[i].nombre);
		printf("Telefono: %d \n",panteras[i].telefono);
	}
}

void buscar(void)
{
	system("color 17");
	printf("Da matricula a buscar: ");
	scanf("%d",&matricula2);
	
	for(i=0;i<n;i++)
	{
		if(matricula2==panteras[i].matricula)
		{
			printf("Matricula: %d", panteras[i].matricula);
			printf("Nombre: ");
			puts(panteras[i].nombre);
			printf("Telefono: %d", panteras[i].telefono);
		}
	}
}
void buscar2(void)
{
	system("color 47");
	int c;
	
	printf("Da nombre a buscar: ");
	getchar();
	gets(nombre2);


	for(i=0;i<n;i++)
	{
		c=strcmp(nombre2,panteras[i].nombre);
		if(c==0)
		{
			printf("Matricula: %d", panteras[i].matricula);
			printf("Nombre: ");
			puts(panteras[i].nombre);
			printf("Telefono: %d", panteras[i].telefono);
		}
	}
}

void modificar(void)
{	
	system("color 17");
	printf("Da matricula para modificar los datos: ");
	scanf(" %d",&matricula2);
	
	for(i=0;i<n;i++)
	{
		if(matricula2==panteras[i].matricula)
		{
			printf("Da nueva matricula: ");
			scanf(" %d",&panteras[i].matricula);
			printf("Da nuevo nombre: ");
			getchar();
			gets(panteras[i].nombre);
			printf("Da nuevo telefono: ");
			scanf("%d",&panteras[i].telefono);
		}
	}
}

void modificar2(void)
{
	int opcion2;
	system("color 47");
	
	printf("Da matricula para modificar los datos: ");
	scanf("%d",&matricula2);
			printf("1.-Matricula \n");
			printf("2.-Nombre \n");
			printf("3.-Telefono \n");
			printf("Opcion: ");
			scanf("%d",&opcion2);
	for(i=0;i<n;i++)
	{
		if(matricula2==panteras[i].matricula)
		{
		
	
		switch(opcion2)
			{	
			case 1: 
			{
				printf("Da nueva matricula: ");
				scanf("%d",&panteras[i].matricula);
			}; 
			getch(); 
			break;	
	
			case 2: 
			{
				printf("Da nuevo nombre: ");
				getchar();
				gets(panteras[i].nombre);
			}; 
			getch(); 
			break;	
	
			case 3: 
			{
				printf("Da nuevo telefono: ");
				scanf("%d",&panteras[i].telefono);
			}; 
			getch();
			break;
				
			default: printf("No valido");
			getch();
			}		
		}
	}
}

void eliminar(void)
{
	system("color 17");
	printf("Da matricula para borrar los datos: ");
	scanf("%d",&matricula2);
	
	for(i=0;i<n;i++)
	{
		if(matricula2==panteras[i].matricula)
		{
		panteras[i].matricula=0;
		strcpy(panteras[i].nombre, borrar);
		panteras[i].telefono=0;
			
		}
	}
}

