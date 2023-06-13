#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char nombre[15];
   char apellido[15];

	printf("Dime tu nombre: ");
	gets(nombre);
	printf("Dime tu apellido: ");
	gets(apellido);
    strcat( nombre, apellido);
    printf( "Tu nombre es %s\n", nombre);
    getch ();
}
