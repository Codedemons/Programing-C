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
	system("color 47");
	do
	{									//inicio de do while
	
	menu();
	scanf("%d",&opcion);
	
	switch(opcion)
	{	//inicio de swicth
	case 1: suma(); getch(); break;	
	case 2: resta(); getch(); break;	
	case 3: multi(); getch(); break;	
	case 4: division(); getch(); break;	
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
	
	void suma(void)
	{
		float v1,v2,suma;
		printf("\n\t\t\t Elegiste la suma \n");
		printf("\n\t\t\t Ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("\n\t\t\t Ingrese el segundo valor: ");
		scanf("%f",&v2);
		suma=v1+v2;
		printf("\n\t\t\t El resultado de la suma es: %f",suma);	
	}
	
	void resta(void)
	{
		float v1,v2,resta;
		printf("\n\t\t\t Elegiste la resta \n");
		printf("\n\t\t\t Ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("\n\t\t\t Ingrese el segundo valor: ");
		scanf("%f",&v2);
		resta=v1-v2;
		printf("\n\t\t\t El resultado de la resta es: %f",resta);
	}
	
	void multi(void)
	{
		float v1,v2,multi;	
		printf("\n\t\t\t Elegiste la multiplicacion \n");
		printf("\n\t\t\t Ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("\n\t\t\t Ingrese el segundo valor: ");
		scanf("%f",&v2);
		multi=v1*v2;
		printf("\n\t\t\t El resultado de la multiplicacion es: %f",multi);
	}
	
	void division(void)
	{
		float v1,v2,div;
		printf("\n\t\t\t Elegiste la division \n");
		printf("\n\t\t\t Ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("\n\t\t\t Ingrese el segundo valor: ");
		scanf("%f",&v2);
		div=v1/v2;
		printf("\n\t\t\t El resultado de la division es: %f",div);
	}
