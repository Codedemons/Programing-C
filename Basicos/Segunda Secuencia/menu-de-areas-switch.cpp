#include<stdio.h>
#include<conio.h>
int main (void)
{
	int opcion;
	float l,b,h,d,D,pi=3.1416,r, a;
	printf("Menu de areas \n");
	printf("elige un numero: \n");
	printf("1-cuadrado \n");
	printf("2-rectangulo \n");
	printf("3-circulo \n");
	printf("4-triangulo \n");
	printf("5-rombo \n");
	printf("6-romboide \n");	
	printf("opcion: ");
	scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				{
				printf("elegiste el cuadrado :)\n");
				printf("da el valor de un lado: ");
				scanf("%f",&l);
				a=l*l;
				printf("el resutado es: %f",a);
				}
				break;
			case 2:
				{
				printf("elegiste el rectangulo :)\n");
				printf("da el valor de la base");
				scanf("%f",&b);
				printf("da el valor de la altura: ");
				scanf("%f",&h);
				a=b*h;
				printf("el resutado es: %f",a);			
				}
				break;
			case 3:
				{				
				printf("elegiste el circulo :)\n");
				printf("da el valor del radio: ");
				scanf("%f",&r);
				pi=3.1416;
				a=pi*(r*r);
				printf("el resutado es: %f",a);
				}
				break;
			case 4:
				{
				printf("elegiste el triangulo :)\n");
				printf("da el valor de la base: ");
				scanf("%f",&b);
				printf("da el valor de la altura: ");
				scanf("%f",&h);
				a=(b*h)/2;
				printf("el resutado es: %f",a);
				}
				break;
			case 5:
				{
				printf("elegiste el rombo :)\n");
				printf("da el valor de la DIAGONAL: ");
				scanf("%f",&D);
				printf("da el valor de la diagonal: ");
				scanf("%f",&d);
				a=(D*d/2);
				printf("el resutado es: %f",a);					
				}
				break;
			case 6:
				{
				printf("elegiste el romboide :)\n");
				printf("da el valor de la base");
				scanf("%f",&b);
				printf("da el valor de la altura: ");
				scanf("%f",&h);
				a=b*h;
				printf("el resutado es: %f",a);
				}
				break;
			default:
				printf("no valido");
		};
	getch();
}
