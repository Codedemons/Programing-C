#include<stdio.h>
#include<conio.h>

int main(void)
{
	float v1,v2,area,Pi=3.1416;
	int opcion;
	
	printf("1.- Cuadrado\n");
	printf("2.- Rectangulo\n");
	printf("3.- Circulo\n");
	printf("4.- Triangulo\n");
	printf("5.- Rombo\n");
	printf("6.- Rombiode\n");
	printf("Da un numero <1...6>: ");
	scanf("%d", & opcion);
	
	switch(opcion)
	{
		case 1:
			{ 
			printf("Elegistes el cuadrado\n");
			printf("proporciona el valor 1");
			scanf("%f", & v1);
			area=v1*v1;
			printf("El area del cuadrado es:%f", area);
			} break;
		case 2:
		    {
			printf("Elegiste el rectangulo\n");
			printf("proporciona el valor 1");
			scanf("%f", & v1);
			printf("proporciona el valor 2");
			scanf("%f", & v2);
			area=v1*v2;
			printf("El are del rectangulo es:%f", area);
	     	} break;
		case 3:
			 {
			 	printf("Elegiste el circulo\n");
			 	printf("proporciona el valor 1");
			 	scanf("%f", & v1);
			 	area=Pi*(v1*v1);
			 	printf("El area del circulo es:%f", area);
			 } break;
		case 4:
			 {
			 	printf("Elegiste el triangulo\n");
			 	printf("proporciona el valor 1");
			 	scanf("%f", & v1);
			 	printf("proporciona el valor 2");
			 	scanf("%f", & v2);
			 	area=(v1*v2)/2;
			 	printf("El area del triangulo es:%f", area);
			 }	break;
		case 5:
			 {
			 	printf("Elegiste el rombo\n");
			 	printf("proporciona el valor 1");
			 	scanf("%f", & v1);
			 	printf("proporciona el valor 2");
			 	scanf("%f", & v2);
			 	area=(v1*v2)/2;
			 	printf("el area del rombo es:%f", area);
			 } break;
		case 6:
		     {
		     	printf("Elegiste el rombiode\n");
		     	printf("proporciona el valor 1");
		     	scanf("%f", & v1);
		     	printf("proporciona el valor 2");
		     	scanf("%f", & v2);
		     	area=(v1*v2);
		     	printf("el area del rombiode es:%f", area);
		     } break;
		     
		     default: printf("el numero no es valido");
	};
	getch;
}
