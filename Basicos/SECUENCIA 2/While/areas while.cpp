# include <stdio.h>
# include <conio.h>
# include <stdlib.h>


int main (void)


{

float r,a,pi,l,D,d,h,b,base,altura;
int opcion;


printf("menu de area\n");
printf("1.-cuadrado\n");
printf("2.-triangulo\n");
printf("3.-rombo\n");
printf("4.-romboide\n");
printf("5.-rectangulo\n");
printf("6.-circulo\n");
printf("7.-salir");
printf("\t opcion :");
scanf("%d",&opcion);


while(opcion!=7)


{// Inicio While


switch(opcion)


{//Inicio Swith


	case 1: 
	
	
		
	printf("elegistes cuadrado");


	printf("Da el valor de lado ");
    scanf("%f",&l);


    a= (l*l);    


	printf("el area es %f",a);


    getch();


	break;
	case 2:
	{	printf("elegistes triangulo");
   	printf("Da el valor de base ");
	scanf("%f",&base);
	printf("Da el valor de la altura ");
	scanf("%f",&altura);
	r=(base*altura)/2;
	printf("el area es %f",r);
getch();		
} break;
  	case 3:
  	{	printf("elegistes rombo");
	printf("da el valor de D");
	scanf("%f",&D);
	printf("da el valor de d");
	scanf("%f",&d);
	a=(D*d)/2;
	printf("el area es %f",a);
	getch();
} break;
	case 4:
	{
	printf("elegistes romboide");
 	printf("da el valor de base");
	scanf("%f",&b);
	printf("da el valor de altura");
	scanf("%f",&h);
	a =(b*h);
	printf("el area es %f",a);
	getch();	
} break;
	case 5:
	{
	printf("elegistes rectangulo");
	printf("da el valor de base");
	scanf("%f",&b);
	printf("da el valor de altura");
	scanf("%f",&h);
	a =(b*h);
	printf("el area es %f",a);
	getch();
} break;
	case 6:
{

	printf("elegistes circulo");
	printf("da el valor del radio");
	scanf("%f",r);
	pi=3.1416;
	a=pi*(r*r);
	printf("el area es %f",a);
	getch();	
} break;
default: printf("no es operacion");
getch();
}//switch
	system("cls");
printf("menu de area\n");
printf("1.-cuadrado\n");
printf("2.-triangulo\n");
printf("3.-rombo\n");
printf("4.-romboide\n");
printf("5.-rectangulo\n");
printf("6.-circulo\n");
printf("7.-salir");
printf("\t opcion :");
scanf("%d",&opcion);
}//while
getch();
	
}//principal
