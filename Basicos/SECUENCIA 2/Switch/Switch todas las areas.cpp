#include <stdio.h>
#include <conio.h>

int main (void)

{ 
int Funcion;
float Area, Radio, P=3.1416, Lado, Perimetro, Apotema, Base, Altura, Dmenor, Dmayor, Bmayor, Bmenor;


printf("Elige una de las siguentes funicones"\n);
printf("1-, Circulo"\n);
printf("2-, Cuadrado"\n);
printf("3-, Pentagono"\n);
printf("4-, Rectangulo"\n);
printf("5-, Rombo"\n);
printf("6-, Romboide"\n);
printf("7-, Trapecio"\n);
printf("8-, Triangulo"\n);

Printf("Dame el numero d ela funcion que elegiste");
scanf("%d",&Funcion);

switch(Funcion)
	case 1:
	{printf("Dame el valor del Radio");
	scanf("%f",&Radio);
	
	Area=P*(Radio*Radio);
	
	printf("El area es:%f",Area);} break;
	
	
	case 2:{
	printf("Dame el valor de un lado");
	scanf("%f",&Lado);	
	
	Area=P*(Radio*Radio);
	
	printf("El area es:%f",Area);} break;
	
	case 3: printf("Marzo"); break;
	
	
	case 4: printf("Abril"); break;
	
	
	case 5: printf("Mayo"); break;
	
	
	case 6: printf("Junio"); break;
	
	
	case 7: printf("Julio"); break;
	
	
	case 8: printf("Agosto"); break;
	
	

	default: printf("No es un  "Mes);
	};
	
	getch();
}
