#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void)

{
	float v1,v2,suma,resta,div,multi;
	int opcion;
	system("color 47");

	do
	{					//inicio de do while
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
	scanf("%d",&opcion);
	switch(opcion)
	{	//inicio de swicth
	case 1:
	{ 
		printf("\n\t\t\t Elegiste la suma :) \n");
		printf("\n\t\t\t Ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("\n\t\t\t Ingrese el segundo valor: ");
		scanf("%f",&v2);
		suma=v1+v2;
		printf("\n\t\t\t El resultado de la suma es: %f",suma);
		getch();
    break;
	}
	case 2:
	{ 
		printf("\n\t\t\t Elegiste la resta :) \n");
		printf("\n\t\t\t Ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("\n\t\t\t Ingrese el segundo valor: ");
		scanf("%f",&v2);
		resta=v1-v2;
		printf("\n\t\t\t El resultado de la resta es: %f",resta);
		getch();
	break;
	}
	case 3:
	{
		printf("\n\t\t\t Elegiste la multiplicacion :) \n");
		printf("\n\t\t\t Ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("\n\t\t\t Ingrese el segundo valor: ");
		scanf("%f",&v2);
		multi=v1*v2;
		printf("\n\t\t\t El resultado de la multiplicacion es: %f",multi);
		getch();
	break;
	}
	case 4:
	{
		printf("\n\t\t\t Elegiste la division :) \n");
		printf("\n\t\t\t Ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("\n\t\t\t Ingrese el segundo valor: ");
		scanf("%f",&v2);
		div=v1/v2;
		printf("\n\t\t\t El resultado de la division es: %f",div);
		getch();
	break;
	}
	default:
	printf("\n\t\t\t No es una operacion");
	getch();
	}//final de swicth
	system("cls");

	}while(opcion!=5);					//final de do while

getch();
}//principal
