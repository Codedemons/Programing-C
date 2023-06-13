#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#define n 2

void llenado(void);
void imprimir(void);
void buscar(void);
void modificar(void);
void eliminar(void);
void menu(void);
															
struct motel
{
	int habitacion;
	char nombre[25];
	char ciudad[15];
	int entrada;
	int salida;
	char habitacion2[10];
	int costo;
	int dias;
	int total;
}moteles[n];

	int i;
	char nombre2[25];
	char borrar[ ]={" "};
	
	FILE *archivo;
	
int main(void)
{
	int opcion;
	system("color 0A");
	do
	{
	menu();
	scanf("%d",&opcion);
	
	switch(opcion)
		{
		case 1: llenado(); getch(); break;	
		case 2: imprimir(); getch(); break;		
		case 3: buscar(); getch(); break;	
		case 4: modificar(); getch(); break;
		case 5: eliminar(); getch(); break;
		default: printf(" Opcion Invalida \n \n \t \t Adios Campeon...");
		getch();
		}
	
	system("cls");
	
	}
	while(opcion!=6);
	
getch();
}	

void menu(void)
{
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t BIENVENIDO A MAR INTIMO  \n");
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
	printf("\t \t \t \t \t \t \t \t \t 5-Eliminacion \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 6-Salir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingresa la opcion y diviertete campeon: ");
}

void llenado(void)
{
	archivo=fopen("C:\\prueba\\motel.bin","wb");
	system("color 17");
	for(i=0;i<n;i++)
	{
		printf("Que habitacion quieres para divertirte: ");
		scanf("%d",&moteles[i].habitacion);
		getchar();
		printf("Nombre del afortunado: ");
		gets(moteles[i].nombre);
		printf("De donde es el afortunado: ");
		gets(moteles[i].ciudad);
		printf("Que dia empieza su suerte: ");
		scanf("%d",&moteles[i].entrada);
		printf("Que dia termina su suerte: ");
		scanf("%d",&moteles[i].salida);
		getchar();
		printf("En que tipo de habitacion quieres divertirte: ");
		gets(moteles[i].habitacion2);
		printf("Costo de tu perversion: ");
		scanf("%d",&moteles[i].costo);
		moteles[i].dias=moteles[i].salida-moteles[i].entrada;
		moteles[i].total=moteles[i].dias*moteles[i].costo;
		fwrite(&moteles[i],sizeof(struct motel),1,archivo);
	}		
}
	
void imprimir(void)
{	
	system("color 47");
	archivo=fopen("C:\\prueba\\motel.bin","rb");
	for(i=0;i<n;i++)
	{
		fread(&moteles[i],sizeof(struct motel),1,archivo);
		printf("Habitacion: %d \n",moteles[i].habitacion);
		printf("Afortunado: ");
		puts(moteles[i].nombre);
		printf("Origen del afortunado: ");
		puts(moteles[i].ciudad);
		printf("Dia que empieza su suerte: %d \n",moteles[i].entrada);
		printf("Dia que termina su suerte: %d \n",moteles[i].salida);
		printf("Tipo de habitacion: ");
		puts(moteles[i].habitacion2);
		printf("La habitacion cuesta: $%d \n",moteles[i].costo);	
		printf("Cuantos dias duro: %d \n",moteles[i].dias);
		printf("Total: $%d \n",moteles[i].total);	
		moteles[i].dias=moteles[i].salida-moteles[i].entrada;
		moteles[i].total=moteles[i].dias*moteles[i].costo;
	}	
		fclose(archivo);
}
	
void buscar(void)
{
	system("color 17");
	archivo=fopen("C:\\prueba\\motel.bin","rb");
	int j;
	printf("Busca al suertudo: ");
	getchar();
	gets(nombre2);
	for(i=0;i<n;i++)
	{
			fread(&moteles[i],sizeof(struct motel),1,archivo);
			j=strcmp(nombre2,moteles[i].nombre);
			if(j==0)
			{
			printf("Afortunado: ");
			puts(moteles[i].nombre);
			printf("Habitacion: %d \n",moteles[i].habitacion);
			printf("Origen del afortunado: ");
			puts(moteles[i].ciudad);
			printf("Dia que empieza su suerte: %d \n",moteles[i].entrada);
			printf("Dia que termina su suerte: %d \n",moteles[i].salida);
			printf("Tipo de habitacion: ");
			puts(moteles[i].habitacion2);
			printf("La habitacion cuesta: $%d \n",moteles[i].costo);
			printf("Cuantos dias duro: %d \n",moteles[i].salida);
			printf("Total: $%d \n",moteles[i].total);
			moteles[i].dias=moteles[i].salida-moteles[i].entrada;
			moteles[i].total=moteles[i].dias*moteles[i].costo;
			}		
	}
			fclose(archivo);
}
	
void modificar(void)
{	
	system("color 47");
	archivo=fopen("C:\\prueba\\motel.bin","rb");
	fread(&moteles[i],sizeof(struct motel),1,archivo);

	int j, opcion_m;
	printf("Nombre del afortunado: ");
	getchar();
	gets(nombre2);

	for(i=0;i<n;i++)
		{
			j=strcmp(nombre2,moteles[i].nombre);
			if(j==0)
			{
				printf("1-Habitacion \n");
				printf("2-Afortunado \n");
				printf("3-Origen del afortunado \n");
				printf("4-Dia que empieza su suerte\n");
				printf("5-Dia que termina su suerte\n");
				printf("6-Tipo de habitacion \n");
				printf("7-La habitacion cuesta \n");
				printf("Opcion: ");
				scanf(" %d",&opcion_m);
				
				archivo=fopen("C:\\prueba\\motel.bin","wb");
			switch(opcion_m)
			{
			case 1: 
				{
				printf("Que habitacion quieres para divertirte: ");
				scanf("%d",&moteles[i].habitacion);
				}; 
				getch(); 
				break;	
	
			case 2: 
				{
				printf("Nombre del afortunado: ");
				getchar();
				gets(moteles[i].nombre);
				}; 
				getch(); 
				break;	
	
			case 3: 
				{
				printf("De donde es el afortunado ");
				getchar();
				gets(moteles[i].ciudad);
				}; 
				getch(); 
				break;	
		
			case 4: 
				{
				printf("Que dia empieza su suerte: ");
				scanf("%d",&moteles[i].entrada);
				}; 
				getch(); 
				break;	
	
			case 5: 
				{
				printf("Que dia termina su suerte: ");
				scanf("%d",&moteles[i].salida);
				}; 
				getch(); 
				break;	
			
			case 6: 
				{
				printf("En que tipo de habitacion quieres divertirte: ");
				getchar();
				gets(moteles[i].habitacion2);
				}; 
				getch(); 
				break;	

			case 7: 
				{
				printf("Costo de tu habitacion: ");
				scanf("%d",&moteles[i].costo);
				}; getch(); 
				break;
				default: 
				printf("No valido");
				getch();
			}		
		moteles[i].dias=moteles[i].salida-moteles[i].entrada;
		moteles[i].total=moteles[i].dias*moteles[i].costo;
		}
		fwrite(&moteles[i],sizeof(struct motel),1,archivo);	
	}		
		fclose(archivo);
}
	
void eliminar(void)
{
	system("color 17");
	archivo=fopen("C:\\prueba\\motel.bin","rb");
	fread(&moteles[i],sizeof(struct motel),1,archivo);
	int j;
	
	printf("Suertudo eliminado: ");
	getchar();
	gets(nombre2);

	for(i=0;i<n;i++)
	{	
		j=strcmp(nombre2,moteles[i].nombre);
		if(j==0)
		{
			archivo=fopen("C:\\prueba\\motel.bin","wb");
			moteles[i].habitacion=0;
			strcpy(moteles[i].nombre, borrar);
			strcpy(moteles[i].ciudad, borrar);
			moteles[i].entrada=0;
			moteles[i].salida=0;
			strcpy(moteles[i].habitacion2, borrar);
			moteles[i].costo=0;
			moteles[i].dias=moteles[i].salida-moteles[i].entrada;
			moteles[i].total=moteles[i].dias*moteles[i].costo;
	
		}
			fwrite(&moteles[i],sizeof(struct motel),1,archivo);
	}
			fclose(archivo);
}
