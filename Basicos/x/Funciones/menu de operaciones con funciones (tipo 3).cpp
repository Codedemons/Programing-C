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
	case 1: printf("La suma es: %.1f", suma(a,b)); getch(); break;
	case 2: printf("La resta es: %.1f", resta(a,b)); getch(); break;	
	case 3: printf("La multiplicacion es: %.1f", multi(a,b)); getch(); break;	
	case 4: printf("La division es: %.2f", division(a,b)); getch(); break;	
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
	
	float suma(float a,float b)
	{
		printf("\n\t\t\t Elegiste la suma \n");
		return a+b;
	}
	
	float resta(float h,float t)
	{
		printf("\n\t\t\t Elegiste la resta \n");
		return h-t;
	}
	
	float multi(float c, float r)
	{	
		printf("\n\t\t\t Elegiste la multiplicacion \n");
		return c*r;
	}
	
	float division(float x,float y)
	{
		printf("\n\t\t\t Elegiste la division \n");
		return x/y;
	}
