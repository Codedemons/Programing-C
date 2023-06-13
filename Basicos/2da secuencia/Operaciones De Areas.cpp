#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main (void)
{
	int opcion;
	float v1, v2, s, r, m, d;

	printf("Menu de operaciones \n");
	printf("1.- Suma \n");
	printf("2.- Resta \n");
	printf("3.- Multiplicacion \n");
	printf("4.- Division \n");
	printf("5.- Salir \n");	
	printf("opcion: ");
	scanf("%d", &opcion);
	while(opcion!=5)
	{//while

		switch(opcion)
		{//switch
			case 1:
				{
				printf("Elegiste Suma \n");
				printf("Dame el primer valor: ");
				scanf("%f",&v1);
				printf("Dame el segundo valor: ");
				scanf("%f",&v2);
				s=v1+v2;
				printf("El resutado es: %f",s);
				}
				break;
			case 2:
				{
				printf("Elegiste Resta \n");
				printf("Dame el primer valor: ");
				scanf("%f",&v1);
				printf("Dame el segundo valor: ");
				scanf("%f",&v2);
				r=v1-v2;
				printf("El resutado es: %f",r);
				}
				break;
			case 3:
				{
				printf("Elegiste Multiplicacion \n");
				printf("Dame el primer valor: ");
				scanf("%f",&v1);
				printf("Dame el segundo valor: ");
				scanf("%f",&v2);
				m=v1*v2;
				printf("El resutado es: %f",m);
				}
				break;
			case 4:
				{
				printf("Elegiste Division \n");
				printf("Dame el primer valor: ");
				scanf("%f",&v1);
				printf("Dame el segundo valor: ");
				scanf("%f",&v2);
				d=v1/v2;
				printf("El resutado es: %f",d);
				}
				break;
	

			default:printf("no valido");

				
		}//switch
					getch();
					system("cls");
					printf("Menu de operaciones \n");
					printf("1.- Suma \n");
					printf("2.- Resta \n");
					printf("3.- Multiplicacion \n");
					printf("4.- Division \n");
					printf("5.- Salir \n");	
					printf("opcion: ");
					scanf("%d", &opcion);
	}//while	
	getch();
}
