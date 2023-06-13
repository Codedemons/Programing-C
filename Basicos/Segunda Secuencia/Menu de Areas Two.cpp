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
	case 1: cuadrado(); getch(); break;	
	case 2: rectangulo(); getch(); break;	
	case 3: circulo(); getch(); break;	
	case 4: triangulo(); getch(); break;
	case 5: rombo(); getch(); break;	
	case 6: romboide(); getch(); break;		
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
	
	float l,b,h,d,D,pi=3.1416,r, a;
	system("color 47");
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
	scanf("%d", &opcion);
	while(opcion!=5)
	{//while

		switch(opcion)
		{//switch
			case 1:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Cuadrado \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el lado: ");
				scanf("%f",&l);
				a=l*l;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El area del Cuadrado es: %f",a);
				}
				break;
			case 2:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Rectangulo \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame la base: ");
				scanf("%f",&b);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame la altura: ");
				scanf("%f",&h);
				a=b*h;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El area del Rectangulo es: %f",a);
				}
				break;
			case 3:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Circulo \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el radio: ");
				scanf("%f",&r);
				pi=3.1416;
				a=(pi)*(r*r);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El area del Circulo es: %f",a);
				}
				break;
			case 4:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Triangulo \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame la base: ");
				scanf("%f",&b);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame la altura: ");
				scanf("%f",&h);
				a=b*h/2;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El area del Triangulo es: %f",a);
				}
				break;
			case 5:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Rombo \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el DIAGONAL: ");
				scanf("%f",&D);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame la diagonal: ");
				scanf("%f",&d);
				a=D*d/2;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El area del Rombo es: %f",a);
				}
				break;
			case 6:
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Elegiste Romboide \n");
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame la base: ");
				scanf("%f",&b);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame la altura: ");
				scanf("%f",&h);
				a=(b*h)/2;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El area del Romboide es: %f",a);
				}
				break;
				break;

			default:				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t no valido");

				
		}//switch
					getch();
					system("cls");
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
					scanf("%d", &opcion);
	}//while	
	getch();
}
