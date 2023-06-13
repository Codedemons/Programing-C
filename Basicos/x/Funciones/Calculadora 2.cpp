# include <stdlib.h>
# include <stdio.h>
# include <conio.h>
void menu(void);
void suma(float a, float b);
void resta(float a, float b);
void multiplicacion(float a, float b);
void division(float a, float b);

int main (void)
{//inicio main
	int op;	
	float a, b;
	system("cls");
		system("color 0A");
	printf("\n\n\n\t\t\t\t\t Elegiste menu de operaciones");
	printf("\n\n\n\t\t\t\t\t Dame el primer valor: ");
	scanf("%f",&a);
	printf("\n\n\n\t\t\t\t\t Dame el segundo valor: ");
	scanf("%f",&b);
do
{//inicio do
system("cls");
menu();
scanf("%d",&op);
switch(op)
{//inicio switch
	case 1: suma(a,b); getch(); break;
	case 2: resta(a,b); getch(); break;
	case 3: multiplicacion(a,b); getch(); break;
	case 4: division(a,b); getch(); break;
	default:system("cls"); system("COLOR 0A");	printf("\n\n\n\n\t\t\t No valida");getch();break;
}//fin switch
}while(op!=5);
}//fin del main

void suma (float a, float b)
{
	float r;
	r=a+b;
	printf("La suma es:%f",r);
}

void resta (float a, float b)
{
	float r;
	r=a-b;
	printf("La resta es:%f",r);
}

void multiplicacion (float a, float b)
{
	float r;
	r=a*b;
	printf("La multiplicacion es:%f",r);
}

void division (float a, float b)
{
	float r;
	r=a/b;
	printf("La division es:%f",r);
}
void menu(void)
{
	system("color 0A");
printf("\n\n\n\t\t\t\t\t  Menu de operaciones");
printf("\n\n\n\t\t\t\t\t  1.- Suma");
printf("\n\n\n\t\t\t\t\t  2.- Resta");
printf("\n\n\n\t\t\t\t\t  3.- Multiplicacion");
printf("\n\n\n\t\t\t\t\t  4.- Division");
printf("\n\n\n\t\t\t\t\t  5.- Salir del programa");
printf("\n\n\n\t\t\t\t\t  opcion: ");
}
