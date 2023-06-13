#include<stdio.h>
#include<conio.h>
int main (void)
{
	float l,b,h,d,D,pi=3.1416,r, a;
	int opcion;
	printf("Menu de areas \n");
	printf("1 Cuadrado \n");
	printf("2 Rectangulo \n");
	printf("3 Circulo \n");
	printf("4 Triangulo \n");
	printf("5 Rombo \n");
	printf("6 Romboide \n");
	printf("opcion: ");
	scanf("%d",&opcion);
	if(opcion==1)
	{
			printf("Elegiste el cuadrado");
			printf("Dame el valor de un lado: ");
			scanf("%f",&l);
			a=l*l;
			printf("El area del cuadrado es: %f",a);
			getch();
	}
	else
		if(opcion==2)
		{
			printf("Elegiste el rectangulo");
			printf("Dame el valor de la base: ");
			scanf("%f",&b);
			printf("Dame el valor de la altura: ");
			scanf("%f",&h);
			a=b*h;
			printf("El area del rectangulo es: %f",a);
			getch();
		}
		else
			if(opcion==3)
			{
				printf("Elegiste el circulo");
				printf("Dame el valor del radio");
				scanf("%f",&r);
				pi=3.1416;
				a=(pi)*(r*r);
				printf("El area del circulo es: %f",a);
				getch();
			}
			else
				if(opcion==4)
				{
					printf("Elegiste el triangulo");
					printf("Da el valor de la base: ");
					scanf("%f",&b);
					printf("Da el valor de la altura: ");
					scanf("%f",&h);
					a=(b*h)/2;
					printf("El area del rectangulo es: %f",a);
					getch();
				}
				else
					if(opcion==5)
					{
						printf("Elegiste el rombo");
						printf("Da el valor de la DIAGONAL: ");
						scanf("%f",&D);
						printf("Da el valor de la diagonal: ");
						scanf("%f",&d);
						a=(D*d)/2;
						printf("El area del rombo es: %f",a);
						getch();
					}
					else
						if(opcion==6)
					{
							printf("Elegiste el romboide");
							printf("Da el valor de la base: ");
							scanf("%f",&b);
							printf("Da el valor de la altura: ");
							scanf("%f",&h);
							a=b*h;
							printf("El area del romboide es: %f",a);
							getch();
						}
}
