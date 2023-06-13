#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
//prototipos de las funciones
void menu(void);
void suma(float a,float b);
void resta(float h,float t);
void multi(float c, float r);
void division(float x,float y);
															//variables globales
int main(void)
{
	float a,b;
	int opcion;
	system("color 47");
	printf("================================================================================\n");
	printf("\n\t\t\t\t Acabas de entrar al menu de operaciones\n\n\n");
	printf("================================================================================\n\n");
	printf("\t\t\t\tda el primer valor: ");
	scanf("%f",&a);
	printf("\t\t\t\tda el segundo valor: ");
	scanf("%f",&b);
	system("color 47");
	do
	{									//inicio de do while
	
	menu();
	scanf("%d",&opcion);
	
	switch(opcion)
	{	//inicio de swicth
	case 1: suma(a,b); getch(); break;	
	case 2: resta(a,b); getch(); break;	
	case 3: multi(a,b); getch(); break;	
	case 4: division(a,b); getch(); break;	
	default: printf("\n\t\t\t Elegiste salir");
	getch();
	}//final de swicth
	
	system("cls");
	
	}while(opcion!=5);					//final de do while

getch();
}//principal
	
	
	
	//funciones
	
	
	
	
	void menu(void)
	{
	printf("================================================================================\n");
	printf("\n\t\t\t\t MENU DE OPERACIONES\n\n\n");
	printf("================================================================================\n\n");
	printf("\t\t\t\t 1-suma \n");
	printf("\n\t\t\t\t 2-resta \n");
	printf("\n\t\t\t\t 3-multiplicacion \n");
	printf("\n\t\t\t\t 4-division \n");
	printf("\n\t\t\t\t 5-salir \n\n\n");
	printf("================================================================================\n");
	printf("\t\t\tIngresa la opcion: ");
	}
	
	void suma(float a,float b)
	{
		printf("\n\t\t\t Elegiste la suma \n");
		printf("\n\t\t\t El resultado de la suma es: %f",a+b);	
	}
	
	void resta(float h,float t)
	{
		printf("\n\t\t\t Elegiste la resta \n");
		printf("\n\t\t\t El resultado de la resta es: %f", h-t);
	}
	
	void multi(float c, float r)
	{	
		printf("\n\t\t\t Elegiste la multiplicacion \n");
		printf("\n\t\t\t El resultado de la multiplicacion es: %f",c*r);
	}
	
	void division(float x,float y)
	{
		printf("\n\t\t\t Elegiste la division \n");
		printf("\n\t\t\t El resultado de la division es: %f",x/y);
	}
