
#include <stdio.h>
#include <conio.h>


int main (void)

{
int ns;

float L,a;
float b,h;
float r;
float d2,d1;
float pi=3.1416;



printf("elija una de las siguientes opciones: \n");
printf ("1.Cuadrado \n");
printf ("2.Rectangulo \n");
printf ("3.Circulo\n");
printf ("4.Triangulo \n"); 
printf ("5.Rombo \n");
printf ("6.Romboide \n");

scanf("%i",&ns);

switch (ns)
{
case 1:
		{
		   printf ("Usted a elegido Cuadrado:\n");
			printf("ingrese el valor del lado: ");
			scanf("%f",&L);
			a=L*L;
			printf("este es el valor del area de su cuadrado: %.3f",a); 
		}  break; 
		
		
case 2: {
			printf ("Usted a elegido Rectangulo:\n");
			printf("ingrese el valor de su base: ");
			scanf("%f",&b);
			printf("ingrese el valor de su altura: ");
			scanf("%f",&h);
			a=(b*h);
			printf("este es el valor del area de su rectangulo es: %.3f",a); 
		} break;

case 3: {
			printf ("Usted a elegido Circulo:\n");
			printf("ingrese el valor de su radio: ");
			scanf("%f",&r);
			a=(r*r)*pi;
			printf("este es el valor del area de su ciculo: %.4f",a); 
		} break;

case 4: {
			printf ("Usted a elegido Triangulo:\n");
			printf("ingrese el valor de su base: ");
			scanf("%f",&b);
			printf("ingrese el valor de su altura: ");
			scanf("%f",&h);
			a=(b*h)/2;
			printf("este es el valor del area de su triangulo: %.3f",a); 
		} break;

case 5: {
			printf ("Usted a elegido Rombo:\n");
			printf("ingrese el valor de su diagonal menor: ");
			scanf("%f",&d1);
			printf("ingrese el valor de su diagonal mayor: ");
			scanf("%f",&d2);
			a=(d1*d2)/2;
			printf("este es el valor del area de su rombo es: %.3f",a); 
		} break;

case 6: {
			printf ("Usted a elegido Romboide:\n");
			printf("ingrese el valor de su base: ");
			scanf("%f",&b);
			printf("ingrese el valor de su altura: ");
			scanf("%f",&h);
			a=(b*h);
			printf("este es el valor del area de su romboide es: %.3f",a); 
		} break;

default : printf("valor no valido");

};
	
	getch ();
}
