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
	printf("\t \t \t \t \t \t \t \t \t Menu de areas \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 1.- Cuadrado \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2.- Rectangulo \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 3.- Circulo \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 4.- Triangulo \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 5.- Rombo \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 6.- Romboide \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 7.- Salir \n");		
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t opcion: ");
	}
	
	void multiplicacion(void)
	{
	float l, multiplicacion;
	printf("\n \n");	
	printf("\t \t \t \t \t \t \t \t \t Elegiste Cuadrado \n");
	printf("\n \n");	
	printf("\t \t \t \t \t \t \t \t \t Dame el lado: ");
	scanf("%f",&l);
	a=l*l;
	printf("\n \n");	
	printf("\t \t \t \t \t \t \t \t \t El area del Cuadrado es: %f",a);
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
