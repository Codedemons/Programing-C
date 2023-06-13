# include <stdio.h>
# include <conio.h>
# include <stdlib.h>



int main (void)


{

float r,area,pi,lado,D,d,h,b,base,altura;
int opcion;


system("color 97");_


printf("MENU DE AREAS\n");
printf("1.-Cuadrado\n");
printf("2.-Triangulo\n");
printf("3.-Rombo\n");
printf("4.-Romboide\n");
printf("5.-Rectangulo\n");
printf("6.-Circulo\n");
printf("7.-Salir");
printf("\t Opcion :");
scanf("%d",&opcion);


while(opcion!=7)


{// Inicio While


switch(opcion)


{//Inicio Swith


case 1: 
	
	
		
	printf("Elegistes Cuadrado");


	printf("Da el valor de lado ");
    scanf("%f",&lado);


    area= (lado*lado);    


	printf("El area es: %f",a);


    getch();


	break;
	
	
case 2:
	
	
	printf("Elegistes Triangulo");
   	
	   
	printf("Da el valor de Base ");
	scanf("%f",&base);
	
	
	printf("Da el valor de la Altura ");
	scanf("%f",&altura);
	
	
	r=(base*altura)/2;
	
	
	printf("El area es: %f",r);
	
	
	getch();		


	break;
  	
	  
case 3:
  	
	  
	printf("Elegistes Rombo");


	printf("Da el valor de D");
	scanf("%f",&D);
	
	
	printf("Da el valor de d");
	scanf("%f",&d);
	
	
	a=(D*d)/2;
	
	
	printf("El area es %f",a);
	
	
	getch();


break;
	
	
	case 4:
	
	printf("Elegistes Romboide");


 	printf("Da el valor de Base");
	scanf("%f",&b);


	printf("Da el valor de Altura");
	scanf("%f",&h);
	
	
	a =(b*h);
	
	
	printf("El area es: %f",a);
	
	
	getch();	


break;


	case 5:
	
	
	printf("Elegistes Rectangulo");
	
	
	printf("Da el valor de Base");
	scanf("%f",&b);
	
	
	printf("Da el valor de Altura");
	scanf("%f",&h);
	
	
	a =(b*h);
	
	
	printf("El area es: %f",a);
	
	
	getch();


break;


	case 6:


	printf("Elegistes Circulo");


	printf("Da el valor del Radio");
	scanf("%f",radio);


	pi=3.1416;


	a=pi*(radio*radio);


	printf("El area es: %f",a);


	getch();	


break;


default: printf("No es operacion");


getch();


}// Final del switch
	
	
	system("cls");


	printf("MENU DE AREAS\n");
	printf("1.-Cuadrado\n");
	printf("2.-Triangulo\n");
	printf("3.-Rombo\n");
	printf("4.-Romboide\n");
	printf("5.-Rectangulo\n");
	printf("6.-Circulo\n");
	printf("7.-Salir");
	printf("\t Opcion :");
	scanf("%d",&opcion);


}//Final del while


getch();
	
	
}//principal
