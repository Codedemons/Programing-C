#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main (void)
{
	int opcion;
	float pi,l,b,h,d_mayor,d_menor,r,a;
	system("color F9");

	do
	{							//inicio de do while
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\t\t\t MENU DE OPERACIONES :)\n\n");
	printf("--------------------------------------------------------------------------------\n\n");
	printf("\t\t\t\t Elige un numero: \n");
	printf("\n\t\t\t\t 1-cuadrado \n");
	printf("\n\t\t\t\t 2-rectangulo \n");
	printf("\n\t\t\t\t 3-circulo \n");
	printf("\n\t\t\t\t 4-triangulo \n");
	printf("\n\t\t\t\t 5-rombo \n");
	printf("\n\t\t\t\t 6-romboide \n");
	printf("\n\t\t\t\t 7-salir \n");
	printf("\n\t\t\t\t opcion: ");
	scanf("%d", &opcion);
	
		switch(opcion)
		{						//inicio de switch
			case 1:
				{
				printf("\n\t\t\t Elegiste el cuadrado :)\n");
				printf("\n\t\t\t Da el valor de un lado: ");
				scanf("%f",&l);
				a=l*l;
				printf("\n\t\t\t El resutado es: %f",a);
				}
				break;
			case 2:
				{
				printf("\n\t\t\t Elegiste el rectangulo :)\n");
				printf("\n\t\t\t Da el valor de la base");
				scanf("%f",&b);
				printf("\n\t\t\t Da el valor de la altura: ");
				scanf("%f",&h);
				a=b*h;
				printf("\n\t\t\t El resutado es: %f",a);			
				}
				break;
			case 3:
				{				
				printf("\n\t\t\t Elegiste el circulo :)\n");
				printf("\n\t\t\t Da el valor del radio: ");
				scanf("%f",&r);
				pi=3.1416;
				a=pi*(r*r);
				printf("\n\t\t\t El resutado es: %f",a);
				}
				break;
			case 4:
				{
				printf("\n\t\t\t Elegiste el triangulo :)\n");
				printf("\n\t\t\t Da el valor de la base: ");
				scanf("%f",&b);
				printf("\n\t\t\t Da el valor de la altura: ");
				scanf("%f",&h);
				a=(b*h)/2;
				printf("\n\t\t\t El resutado es: %f",a);
				}
				break;
			case 5:
				{
				printf("\n\t\t\t Elegiste el rombo :)\n");
				printf("\n\t\t\t Da el valor de la diagonal mayor: ");
				scanf("%f",&d_mayor);
				printf("\n\t\t\t Da el valor de la diagonal menor: ");
				scanf("%f",&d_menor);
				a=(d_mayor*d_menor)/2;
				printf("\n\t\t\t El resutado es: %f",a);					
				}
				break;
			case 6:
				{
				printf("\n\t\t\t Elegiste el romboide :)\n");
				printf("\n\t\t\t Da el valor de la base");
				scanf("%f",&b);
				printf("\n\t\t\t Da el valor de la altura: ");
				scanf("%f",&h);
				a=b*h;
				printf("\n\t\t\t El resutado es: %f",a);
				}
				break;
			default:
				printf("\n\t\t\t No valido");
		};			//fin de switch
		getch();
	system("cls");
		
	}while(opcion!=7);				//fin de while
	getch();
}
