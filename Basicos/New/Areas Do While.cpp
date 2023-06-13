#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main (void)
{
	int opcion;
	float l,b,h,d,D,pi=3.1416,r, a;
	system("color 0A");

	do
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
	scanf("%d", &opcion);
	
		switch(opcion)
		{						
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
			default:				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t no valido");
	getch();
	}
	system("cls");

	}while(opcion!=7);				

getch();
}
