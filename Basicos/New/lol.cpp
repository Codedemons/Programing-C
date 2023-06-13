#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
//prototipos de las funciones
void menu(void);
void suma(void);
void resta(void);
void multi(void);
void division(void);
															
//variables globales

int main(void)
{
	int opcion;
	system("color 0A");
	do
	{									
	//inicio de do while
	
	menu();
	scanf("%d",&opcion);
	
	switch(opcion)
	{	
	//inicio de swicth
	case 1: suma(); getch(); break;	
	case 2: resta(); getch(); break;	
	case 3: multi(); getch(); break;	
	case 4: division(); getch(); break;	
	default: printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Elegiste salir");
	getch();
	}
	//final de swicth
	
	system("cls");
	
	}while(opcion!=5);				
	//final de do while

getch();
}
//principal
	
//funciones
	
	void menu(void)
	{
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Menu de operaciones \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 1.- Suma \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2.- Resta \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 3.- Multiplicacion \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 4.- Division \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 5.- Salir \n");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t opcion: ");
	}
	
	void suma(void)
	{
	float v1,v2,suma;
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Elegiste la suma \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingrese el primer valor: ");
	scanf("%f",&v1);
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingrese el segundo valor: ");
	scanf("%f",&v2);
	suma=v1+v2;
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \tEl resultado de la suma es: %f",suma);	
	}
	
	void resta(void)
	{
	float v1,v2,resta;
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Elegiste la resta \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingrese el primer valor: ");
	scanf("%f",&v1);
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingrese el segundo valor: ");
	scanf("%f",&v2);
	resta=v1-v2;
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t El resultado de la resta es: %f",resta);
	}
	
	void multi(void)
	{
	float v1,v2,multi;	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Elegiste la multiplicacion \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingrese el primer valor: ");
	scanf("%f",&v1);
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingrese el segundo valor: ");
	scanf("%f",&v2);
	multi=v1*v2;
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t El resultado de la multiplicacion es: %f",multi);
	}
	
	void division(void)
	{
	float v1,v2,div;
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Elegiste la division \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingrese el primer valor: ");
	scanf("%f",&v1);
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingrese el segundo valor: ");
	scanf("%f",&v2);
	div=v1/v2;
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t El resultado de la division es: %f",div);
	}
