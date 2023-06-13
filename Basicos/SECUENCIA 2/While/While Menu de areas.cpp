#include<stdlib.h>
#include<stdio.h>
#include<conio.h>


int main(void)


{//inicio del progrma

float  a,b,suma,resta,multiplicacion,division;

int opcion;

printf("MENU DE AREAS\n");
printf("1. Suma\n");
printf("2. Resta\n");
printf("3. Multiplicacion\n");
printf("4. Division\n");
printf("5. Salir\n");
scanf("%d",&opcion);

while(opcion!=5)
{//Inicio del cilco while para el menu

switch(opcion)
{//inicio del cliclo switch menu

case 1:
	
	printf("Elegiste Suma\n");


	printf("Dame el primer valor: ");
	scanf ("%f",&a);


	printf("Dame el segundo valor: ");
	scanf("%f",&b);


	suma=a+b;


	printf("El resultado de la Suma es:%f",suma);

	getch();
	
	break;
	
case 2:
	printf("Elegiste Resta\n");
	
	
	printf("Dame el primer valor: ");
	scanf ("%f",&a);


	printf("Dame el segundo valor: ");
	scanf("%f",&b);


	resta=a-b;

	
	printf("El resultado de la resta es:%f",resta);

	getch();
	
	break;
	
case 3:
	
	printf("Elegiste Multiplicacion\n");
	
	printf("Dame el primer valor: ");
	scanf ("%f",&a);
	
	
	printf("Dame el segundo valor: ");
	scanf("%f",&b);
	
	
	multiplicacion=a*b;
	
	
	printf("El resultado de la Multiplicacion es:%f",multiplicacion);
	
	getch();
	
	break;
	
case 4:
	
	printf("Elegiste Division\n");
	
	
	printf("Dame el primer valor: ");
	scanf ("%f",&a);
	
	
	printf("Dame el segundo valor: ");
	scanf("%f",&b);
	
	
	division=a/b;
	
	
	printf("El resultado de la Division es:%f",division);
	
	getch();
	
	break;
	
default: printf("No existe esa opcion\n");getch();

}//Final del ciclo switch menu de operaciones

system("cls");

printf("MENU DE AREAS\n");
printf("1. Suma\n");
printf("2. Resta\n");
printf("3. Multiplicacion\n");
printf("4. Division\n");
printf("5. Salir\n");
printf("\t opcion: ");
scanf("%d",&opcion);

getch();

}//final del ciclo while del menu


	
getch();
}

