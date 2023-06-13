#include<stdio.h>
#include<conio.h>
int main (void)
{
	float a, b, h, l, D_mayor, D_menor, pi, r;
	int opcion;
	printf("menu de areas \n");
	printf("1 para cuadrado \n");
	printf("2 para rectangulo \n");
	printf("3 para circulo \n");
	printf("4 para triangulo \n");
	printf("5 para rombo \n");
	printf("6 para romboide \n");
	printf("opcion: ");
	scanf("%d",&opcion);
	if(opcion==1)
	{
			printf("elegiste el cuadrado \n");
			printf("da el valor de un lado: ");
			scanf("%f",&l);
			a=l*l;
			printf("el area del cuadrado es: %f",a);
			getch();
	}
	else
		if(opcion==2)
		{
			printf("elegiste el rectangulo");
			printf("da el valor de la base: ");
			scanf("%f",&b);
			printf("da el valor de la altura: ");
			scanf("%f",&h);
			a=b*h;
			printf("el area del rectangulo es: %f",a);
			getch();
		}
		else
			if(opcion==3)
			{
				printf("elegiste el circulo");
				printf("da el valor del radio");
				scanf("%f",&r);
				pi=3.1416;
				a=(pi)*(r*r);
				printf("el area del circulo es: %f",a);
				getch();
			}
			else
				if(opcion==4)
				{
					printf("elegiste el triangulo");
					printf("da el valor de la base: ");
					scanf("%f",&b);
					printf("da el valor de la altura: ");
					scanf("%f",&h);
					a=(b*h)/2;
					printf("el area del rectangulo es: %f",a);
					getch();
				}
				else
					if(opcion==5)
					{
						printf("elegiste el rombo");
						printf("da el valor de la diagonal mayor: ");
						scanf("%f",&D_mayor);
						printf("da el valor de la diagonal menor: ");
						scanf("%f",&D_menor);
						a=(D_mayor*D_menor)/2;
						printf("el area del rombo es: %f",a);
						getch();
					}
					else
						if(opcion==6)
					{
							printf("elegiste el romboide");
							printf("da el valor de la base: ");
							scanf("%f",&b);
							printf("da el valor de la altura: ");
							scanf("%f",&h);
							a=b*h;
							printf("el area del romboide es: %f",a);
							getch();
					}
						else
							printf("opcion no valida");
							getch();
}
