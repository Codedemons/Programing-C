#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void nuevo(void);
void lectura(void);
void agregar(void);
void menu(void);

	FILE *archivo;

	char linea[80];
 	char linea2;

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
	case 1: nuevo(); getch(); break;	
	case 2: lectura(); getch(); break;		
	case 3: agregar(); getch(); break;	
	default: printf("\t \t \t \t \t \t \t \t \t Opcion Invalida \n \n \t \t \t \t \t \t \t \t \t Adios...");
	getch();
	}
	
	system("cls");
	
	}while(opcion!=4);		

getch();
}
	
void menu(void)
{
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t MENU DE ARCHIVOS DE TEXTO  \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 1-Crear archivo nuevo \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2-Abrir archivo para lectura \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 3-Abrir archivo para agregar  \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 4-Salir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingresa la opcion: ");
}
	
void nuevo (void)
{
	char ruta[50]="C:\\prueba\\";
	char archivo2[50];
	system("color 17");											
	getchar();
	fflush(stdin);									
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Introduce cadena de texto: ");
	gets(linea);
	getchar();
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Desea guardar el archivo: ");
	scanf("%c",&linea2);
	if(linea2=='s'|| linea2=='n')
	{
		getchar();
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Da nombre del archivo: ");
		gets(archivo2);
		strcat(ruta,archivo2);
		strcat(ruta,".txt");
		archivo=fopen(ruta,"w");
		fputs(linea,archivo);
	}
	fclose(archivo);
	getch();
}

void lectura (void)
{
	char *fin;
	char ruta[50]="C:\\prueba\\";
	char archivo2[50];
	system("color 47");		
	getchar();
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Da nombre del archivo para leer: ");
	gets(archivo2);
	strcat(ruta,archivo2);
	strcat(ruta,".txt");
	archivo=fopen(ruta,"r");
	fputs(linea,archivo);
	do
	{
		fin=fgets(linea,sizeof(archivo),archivo);
		printf("%s",linea);	
	}while(fin!=NULL);

	fclose(archivo);
	getch();
}
	
void agregar (void)
{
	char ruta[50]="C:\\prueba\\";
	char archivo2[50];
	system("color 17");	
	getchar();
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Da nombre del archivo para agregar: ");
	gets(archivo2);
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Introduce lo que deseas agregar: ");
	gets(linea);
	strcat(ruta,archivo2);
	strcat(ruta,".txt");
	archivo=fopen(ruta,"a");
	fputs(linea,archivo);
	fclose(archivo);
		
}
