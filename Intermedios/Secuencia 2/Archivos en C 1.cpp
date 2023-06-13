#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

main (void)
{
	FILE*archivo;
	
	char linea[80];
	archivo=fopen("C:\\prueba\\tarea.txt","w");
	printf("Introduce cadena de texto: ");
	gets(linea);
	fputs(linea,archivo);
	fclose(archivo);
	getch();
}
