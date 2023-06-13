#include<stdio.h>
#include<conio.h>
#define n 2

struct alumno
{
	int matricula;
	char nombre[50];
	int telefono;
}
panteras[n];
int main (void)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\t\t\t Da Matricula: \n\n\n");
		scanf("%d",&panteras[i].matricula);
		getchar();
		printf("\t\t\t Da Nombre: \n\n\n");
		gets(panteras[i].nombre);
		printf("\t\t\t Da Numero De Telefono: \n\n\n");
		scanf("%d",&panteras[i].telefono);
	}
	for(i=0; i<n; i++)
	{
		printf("\t\t\t Matricula:%d\n\n\n", panteras[i].matricula);
		printf("\t\t\t Nombre:%s\n\n\n", panteras[i].nombre);
		printf("\t\t\t Telefono:%d\n\n\n", panteras[i].telefono);
	}
	
	printf("\t\t\t Da matricula a buscar: \n\n\n");
	scanf("%d",&panteras[i].matricula);
	
	for(i=0; i<n; i++)
	{
		if(panteras[i].matricula==panteras[n].matricula)
		{
			printf("\t\t\t Matricula:%d\n\n\n", panteras[i].matricula);
			printf("\t\t\t Nombre: \n\n\n");
			puts(panteras[i].nombre);
			printf("\t\t\t Telefono:%d\n\n\n", panteras[i].telefono);
		}
	}
	printf("\t\t\t Da matricula para modificar: \n\n\n");
	scanf("%d",&panteras[i].matricula);
	
	for(i=0; i<n; i++)
	{
		if(panteras[i].matricula==panteras[n].matricula)
		{
			printf("Da Nueva Matricula: ");
			scanf("%d",&panteras[i].matricula);
			getchar();
			printf("Da Nuevo Nombre: ");
			gets(panteras[i].nombre);
			printf("Da Nuevo Numero De Telefono: ");
			scanf("%d",panteras[i].telefono);
		}
	}
	printf("\t\t\t Da matricula para eliminar: \n\n\n");
	scanf("%d",&panteras[i].matricula);
	
	for(i=0; i<n; i++)
	{
		if(panteras[i].matricula==panteras[n].matricula)
		{
			printf("Da Nueva Matricula: ");
			scanf("%d",&panteras[i].matricula);
			getchar();
			printf("Da Nuevo Nombre: ");
			gets(panteras[i].nombre);
			printf("Da Nuevo Numero De Telefono: ");
			scanf("%d",panteras[i].telefono);
		}
	}
}

	
