# include <stdlib.h>
# include <stdio.h>
# include <conio.h>
void menu(void);
void suma(void);
void resta(void);
void multiplicacion(void);
void division(void);

int main (void)
{//inicio main
	int op;
do
{//inicio do
system("cls");
menu();
scanf("%d",&op);
switch(op)
{//inicio switch
	case 1: suma(); getch(); break;
	case 2: resta(); getch(); break;
	case 3: multiplicacion(); getch(); break;
	case 4: division(); getch(); break;
	default:system("cls"); system("COLOR 0A");	printf("\n\n\n\t\t\t\t Opcion invalida \n");getch();break;
}//fin switch
}while(op!=5);
}//fin del main


void menu(void)
{
	system("color 0A");
printf("\n\n\n\t\t\t\t  Menu de operaciones");
printf("\n\n\n\t\t\t\t  1.- Suma");
printf("\n\n\n\t\t\t\t  2.- Resta");
printf("\n\n\n\t\t\t\t  3.- Multiplicacion");
printf("\n\n\n\t\t\t\t  4.- Division");
printf("\n\n\n\t\t\t\t  5.- Salir del programa");
printf("\n\n\n\t\t\t\t  opcion: ");
}
void suma(void)
{
	float  v1,v2,r;
			system("cls");
			printf("\n\n\n\t\t\t\t Dame el primer valor: ");
			scanf(" %f",&v1);
			printf("\n\n\n\t\t\t\t Dame el segundo valor: ");
			scanf("%f",&v2);
			r=v1+v2;
			printf("\n\n\n\t\t\t\t El resultado de la suma es %.2f \n",r);
}
void resta(void)
{
	float v1,v2,r;
	  		system("cls");
			printf("\n\n\n\t\t\t\t Dame el primer valor: ");
			scanf("%f",&v1);
			printf("\n\n\n\t\t\t\t Dame el segundo valor: ");
			scanf("%f",&v2);
  			r=v1-v2;
  			printf("\n\n\n\t\t\t\t  El resultado de la resta es %.2f\n",r);
}
void multiplicacion(void)
{
	float v1,v2,r;
	  		system("cls");
			printf("\n\n\n\t\t\t\t Dame el primer valor: ");
			scanf("%f",&v1);
			printf("\n\n\n\t\t\t\t Dame el segundo valor: ");
			scanf("%f",&v2);
  			r=v1*v2;
  			printf("\n\n\n\t\t\t\t El resultado de la multiplicacion es %.2f\n",r);
}
void division(void)
{
	float v1,v2,r;
	  		system("cls");
			printf("\n\n\n\t\t\t\t Dame el primer valor: ");
			scanf("%f",&v1);
			printf("\n\n\n\t\t\t\t Dame el segundo valor: ");
			scanf("%f",&v2);
  			r=v1/v2;
  			printf("\n\n\n\t\t\t\t El resultado de la division es %.2f\n",r);
}
