#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main (void)
{

	int opcion;
	int v1, v2, suma, resta, multiplicacion, division;
	system("color 0A");

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
	scanf("%d", &opcion);
	while(opcion!=5)
	{//while

		switch(opcion)
		{//switch
			case 1:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Suma \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el primer valor: ");
				scanf("%d",&v1);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el segundo valor: ");
				scanf("%d",&v2);
				suma=v1+v2;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El resultado de la suma es: %d",suma);
				}
				break;
			case 2:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Resta \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el primer valor: ");
				scanf("%d",&v1);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el segundo valor: ");
				scanf("%d",&v2);
				resta=v1-v2;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El resultado de la resta es: %d",resta);
				}
				break;
			case 3:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Multiplicacion \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el primer valor: ");
				scanf("%d",&v1);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el segundo valor: ");
				scanf("%d",&v2); 
				multiplicacion=v1*v2;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El resultado de la multiplicacion es: %d",multiplicacion);
				}
				break;
			case 4:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Division \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el primer valor: ");
				scanf("%d",&v1);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el segundo valor: ");
				scanf("%d",&v2);
				division=v1/v2;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El resultado de la division es: %d",division);
				}
				break;

				break;

			default:				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t no valido");

				
		}//switch
					getch();
					system("cls");
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
					scanf("%d", &opcion);
	}//while	
	getch();
}
