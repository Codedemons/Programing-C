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
	
	}while(opcion!=11);					//final de do while

getch();
}//principal
	
	//funciones
	
	void menu(void)
	{

	printf("********************************************************************************\n");
	printf("\n\t\t\t\t Menu De Programas \n\n\n");
	printf("********************************************************************************\n\n");
	printf("\t\t\t\t\t 1.-Programa 1 \n");
	printf("\n\t\t\t\t 2.-Programa 2 \n");
	printf("\n\t\t\t\t 3.-Programa 3 \n");
	printf("\n\t\t\t\t 4.-Programa 4 \n");
	printf("\n\t\t\t\t 5.-Programa 5 \n");
	printf("\t\t\t\t\t 6.-Programa 6 \n");
	printf("\n\t\t\t\t 7.-Programa 7 \n");
	printf("\n\t\t\t\t 8.-Programa 8 \n");
	printf("\n\t\t\t\t 9.-Programa 9 \n");
	printf("\n\t\t\t\t 10.-Programa 10 \n\n\n");
	printf("********************************************************************************\n");
	printf("\t\t\t Ingresa la opcion: ");
	}
	
		void edad(void)
	{
		float fecha_actual, fecha_de_nacimiento, edad;
		printf("\n\t\t\t Elegiste el programa de Edad\n");
		printf("\n\t\t\t Dame la fecha actual: ");
		scanf("%f",&fecha_actual);
		printf("\n\t\t\t Dame fecha de nacimiento: ");
		scanf("%f",&fecha_de_nacimiento);
		edad=fecha_actual-fecha_de_nacimiento;
		printf("\n\t\t\t La edad es: %f",edad);	
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
