#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

main (void)
{
	FILE*archivo;
	
	char linea[80];
	char*fin;
	archivo=fopen("C:\\prueba\\tarea.txt","r");
	do
	{
		fin=fgets(linea,sizeof(archivo),archivo);
		printf("%s",linea);
	}
	while(fin!=NULL);
	getch();
}
