#include<stdio.h>
#include<conio.h>

int main(void)
{
	float a,l,b,h,r,pi=3.1416,D,d;
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
			printf("Elegistes el cuadrado");
			printf("Proporciona el valor de un lado: ");
			scanf("%f", & l);
			a=l*l;
			printf("El area del cuadrado es:%f", a);
			} break;
		case 2:
		    {
			printf("Elegiste el rectangulo");
			printf("Proporciona la base: ");
			scanf("%f", & b);
			printf("Proporciona la altura: ");
			scanf("%f", & h);
			a=b*h;
			printf("El area del rectangulo es:%f", a);
	     	} break;
		case 3:
			 {
			 	printf("Elegiste el circulo");
			 	printf("Proporciona la radio: ");
			 	scanf("%f", & r);
			 	a=pi*(r*r);
			 	printf("El area del circulo es:%f", a);
			 } break;
		case 4:
			 {
			 	printf("Elegiste el triangulo");
			 	printf("Proporciona la base: ");
			 	scanf("%f", & b);
			 	printf("Proporciona la altura: ");
			 	scanf("%f", & h);
			 	a=(b*h)/2;
			 	printf("El area del triangulo es:%f", a);
			 }	break;
		case 5:
			 {
			 	printf("Elegiste el rombo");
			 	printf("Proporciona la DIAGONAL: ");
			 	scanf("%f", & D);
			 	printf("proporciona el diagonal: ");
			 	scanf("%f", & d);
			 	a=(D*d)/2;
			 	printf("el area del rombo es:%f", a);
			 } break;
		case 6:
		     {
		     	printf("Elegiste el romboide");
		     	printf("Proporciona la base: ");
		     	scanf("%f", & b);
		     	printf("Proporciona la altura: ");
		     	scanf("%f", & h);
		     	a=(b*h);
		     	printf("el area del rombiode es:%f", a);
		     } break;
		     
		     default: printf("el numero no es valido");
	};
	getch;
}
