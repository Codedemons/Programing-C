#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include <stdbool.h>
#define n 2

void llenado(void);
void imprimir(void);
void buscar(void);
void buscara(void);
void modificar(void);
void modificar2(void);
void eliminar(void);

struct alumno
{
	int matricula;
	char nommbre[50];
	char apellido[50];
	int telefono;
}panteras[n];
int matri,i=0,opcion;
char vacio[]="   ";
char busco[50];

FILE *archivo;

int main(void)
{
	do{
	system("color 0A");
	system("cls");
	printf("\t\t\t\t Menu de estructuras\n");
	printf("\t\t1.- Llenado\n");
	printf("\t\t2.- Imprimir\n");
	printf("\t\t3.- Buscar por matricula\n");
	printf("\t\t4.- Buscar por nombre o apellido\n");
	printf("\t\t5.- Modificar\n");
	printf("\t\t6.- Modificar por partes\n");
	printf("\t\t7.- Eliminar\n");
	printf("\t\t8.- Salir\n");
	printf("\t\tOpcion\n");
	scanf("%i",&opcion);
	switch(opcion)
	{
		case 1: llenado(); getch(); break;
		case 2: imprimir(); getch(); break;
		case 3: buscar(); getch(); break;
		case 4: buscara(); getch(); break;
		case 5: modificar(); getch(); break;
		case 6: modificar2(); getch(); break;
		case 7: eliminar(); getch(); break;
		case 8: getch(); break;
		default: printf("nop");
	}
}while(opcion!= 8);
}

void llenado(void)
{
	archivo=fopen("C:\\prueba\\cetis.bin","wb");
	system("cls");
	for(i=0; i<2; i++)
	{
		printf("\t\tDa la matricula ");
		scanf("%d",&panteras[i].matricula);
		getchar();
		printf("\t\tDa el nombre ");
		gets(panteras[i].nommbre);
		printf("\t\tDa el apellido");
		gets(panteras[i].apellido);
		printf("\t\tTelefono ");
		scanf("%d",&panteras[i].telefono);
		fwrite(&panteras[i],sizeof(struct alumno),1,archivo);
	}
}

void imprimir(void)
{
	archivo=fopen("C:\\prueba\\cetis.bin","rb");
	system("cls");
		for(i=0; i<2; i++)
	{
		fread(&panteras[i],sizeof(struct alumno),1,archivo);
		printf("\t\tMatricula%d\n",panteras[i].matricula);
		printf("\t\t%s %s\n",panteras[i].nommbre, panteras[i].apellido);
		printf("\t\t%d\n",panteras[i].telefono);
		}
		fclose(archivo);
}

void buscar(void)
{
	system("cls");
			printf("Da matricula a buscar");// Busqueda
	scanf("%d",&matri);
		for(i=0; i<2; i++)
	{
		if(matri==panteras[i].matricula)
		{
		printf("%d\n",panteras[i].matricula);
		printf("%s\n",panteras[i].nommbre);
		printf("%d\n",panteras[i].telefono);
		}
	}
}

void buscara(void)
{
	char busco[50];
	system("cls");
					getchar();
			printf("Nombre a buscar ");// Busqueda
			gets(busco);
		for(i=0; i<2; i++)
	{
		if((strcmp(busco,panteras[i].nommbre) == 0) or (strcmp(busco,panteras[i].apellido)==0))
		{
		printf("%d\n",panteras[i].matricula);
		printf("%s\n",panteras[i].nommbre);
		printf("%s\n",panteras[i].apellido);
		printf("%d\n",panteras[i].telefono);
		}
	}
}

void modificar(void)
{
	system("cls");
		printf("Da matricula para modificar");
	scanf("%d",&matri);
		for(i=0; i<2; i++)
	{
		if(matri==panteras[i].matricula)
		{
		printf("Da la matricula ");
		scanf("%d",&panteras[i].matricula);
		getchar();
		printf("Da el nombre ");
		gets(panteras[i].nommbre);
		printf("Telefono ");
		scanf("%d",&panteras[i].telefono);
		}
	}
}

void modificar2(void)
{
	int opcion;
	system("cls");
	system("color a9");
	system("cls");
	printf("\t\t\t\t Campo a modificar\n");
	printf("\t\t1.- Matricula\n");
	printf("\t\t2.- Nombre\n");
	printf("\t\t3.- Apellido\n");
	printf("\t\t4.- Telefono\n");
	printf("\t\tOpcion\n");
	scanf("%i",&opcion);
	switch(opcion)
	{
		case 1:
			{
				printf("Inserte la matricula a cambiar");
				scanf("%i",&matri);
						for(i=0; i<2; i++)
	{
		if(matri==panteras[i].matricula)
{
				printf("De la nueva matricula");
				scanf("%i",&panteras[i].matricula);
				getch();
			}
		}
			} break;
		case 2:
			{
								getchar();
				printf("Inserte el nombre a cambiar");
				gets(busco);
	for(i=0; i<2; i++)
	{
		if(strcmp(busco,panteras[i].nommbre) ==0)
		{
				printf("De el nuevo nombre");
				gets(panteras[i].nommbre);
				getch();
		}
	}

			}break;
		case 3: 
			{
				getchar();
				printf("Inserte el apellido a cambiar");
				gets(busco);
	for(i=0; i<2; i++)
	{
		if(strcmp(busco,panteras[i].apellido) ==0)
		{
			getchar();
				printf("De el nuevo apellido");
				gets(panteras[i].apellido);
		}
	}
			}break;
		case 4:
			{
				printf("Inserte el telefono a cambiar");
				scanf("%i",matri);
						for(i=0; i<2; i++)
	{
		if(matri==panteras[i].telefono)
{
				printf("De el nuevo telefono");
				scanf("%i",&panteras[i].telefono);
				getch();
			}
		}
			}break;
		default: printf("nop");
	}
}

void eliminar(void)
{
	system("cls");
		for(i=0; i<2; i++)
	{
		printf("%d\n",panteras[i].matricula);
		printf("%s\n",panteras[i].nommbre);
		printf("%d\n",panteras[i].telefono);
		}

	printf("Da matricula para eliminar");
	scanf("%d",&matri);
		for(i=0; i<2; i++)
	{
		if(matri==panteras[i].matricula)
		{
panteras[i].matricula=0;
strcpy(panteras[i].nommbre, vacio);
panteras[i].telefono=0;
		}
	}
}

