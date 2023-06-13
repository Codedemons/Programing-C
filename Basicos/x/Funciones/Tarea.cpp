#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
//prototipos de las funciones
void menu(void);
float suma(float a,float b);
float resta(float h,float t);
float multi(float c, float r);
float division(float x,float y);
															//variables globales
int main(void)
{
	float a,b;
	int opcion;
	system("color 0A");
	printf("\n\n\n\t\t\t\t  Acabas de entrar al menu de operaciones\n\n\n");
	printf("\n\n\n\t\t\t\t  Da el primer valor: ");
	scanf("%f",&a);
	printf("\n\n\n\t\t\t\t  Da el segundo valor: ");
	scanf("%f",&b);
	system("color 0A");
	do
	{									//inicio de do while
	
	menu();
	scanf("%d",&opcion);
	
	switch(opcion)
	{	//inicio de swicth
	case 1: printf("La suma es: %.1f", suma(a,b)); getch(); break;
	case 2: printf("La resta es: %.1f", resta(a,b)); getch(); break;	
	case 3: printf("La multiplicacion es: %.1f", multi(a,b)); getch(); break;	
	case 4: printf("La division es: %.2f", division(a,b)); getch(); break;	
	default: printf("\n\n\n\t\t\t\t Elegiste salir");
	getch();
	}//final de swicth
	
	system("cls");
	
	}while(opcion!=5);					//final de do while

getch();
}//principal
	
	//funciones
	
	void menu(void)
	{
printf("\n\n\n\t\t\t\t  Menu de operaciones");
printf("\n\n\n\t\t\t\t 1.- Suma");
printf("\n\n\n\t\t\t\t  2.- Resta");
printf("\n\n\n\t\t\t\t  3.- Multiplicacion");
printf("\n\n\n\t\t\t\t  4.- Division");
printf("\n\n\n\t\t\t\t  5.- Salir del programa");
printf("\n\n\n\t\t\t\t  opcion: ");
	}
	
	float suma(float a,float b)
	{

		return a+b;
	}
	
	float resta(float h,float t)
	{

		return h-t;
	}
	
	float multi(float c, float r)
	{	

		return c*r;
	}
	
	float division(float x,float y)
	{

		return x/y;
	}
