# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
void menu(void);
void cuadrado(void);
void rectangulo(void);
void circulo(void);
void triangulo(void);
void rombo(void);
void romboide(void);

int main (void)
{
int op;
do{
	system("cls");
	menu();
	scanf("%d",&op);
switch(op)
{
	case 1: cuadrado(); getch(); break;
	case 2: rectangulo(); getch(); break;
	case 3: circulo(); getch(); break;
	case 4: triangulo(); getch(); break;
	case 5: rombo(); getch(); break;
	case 6: romboide(); getch();  break;
	default:system("cls"); system("COLOR 0A");	printf("\n\n\n\t\t\t\t Opcion invalida \n");getch();break;
}//switch
}while(op!=7);//do
return(0);
}//main

void menu(void)
{
system("color 0A");
printf("\n\n\n\t\t\t\t Menu de areas \n\n\n");
printf("\n\n\n\t\t\t\t 1.-Cuadrado \n");
printf("\n\n\n\t\t\t\t 2.-Rectangulo \n");
printf("\n\n\n\t\t\t\t 3.-Circulo \n");
printf("\n\n\n\t\t\t\t 4.-Triangulo \n");
printf("\n\n\n\t\t\t\t 5.-Rombo \n");
printf("\n\n\n\t\t\t\t 6.-Romboide \n");
printf("\n\n\n\t\t\t\t 7.- Salir \n");
printf("\n\n\n\t\t\t\t Elija una opcion: ");
}

void cuadrado(void)   
{
	float v1,v2,a;
	system("cls");
	system("COLOR 0A");
	printf("\n\n\n\t\t\t\t Elegiste cuadrado");
	printf("\n\n\n\t\t\t\t Dame el lado: ");
    scanf("%f",&v1);
    a=(v1*v1);    
	printf("\n\n\n\t\t\t\t El area del Cuadrado es:%f\n",a); 
}

void rectangulo(void)
{
	float v1,v2,a;
	system("cls");
	system("COLOR 0A");
	printf("\n\n\n\t\t\t\t Elegiste rectangulo");
	printf("\n\n\n\t\t\t\t Dame la base: ");
	scanf("%f",&v1);
	printf("\n\n\n\t\t\t\t Dame la altura: ");
	scanf("%f",&v2);
	a=(v1*v2);
	printf("\n\n\n\t\t\t\t El area del Rectangulo es:%f\n",a);
}

void circulo(void)
{
	float v1, v2, a, pi;
	system("cls");
	system("COLOR 0A");
	printf("\n\n\n\t\t\t\t Elegiste circulo");
	printf("\n\n\n\t\t\t\t Dame el radio: ");
	scanf("%f",&v1);
	pi=3.1416;
	a=(pi*(v1*v1));
	printf("\n\n\n\t\t\t\t El area del Circulo es:%f \n",a);
}

void triangulo(void)
{
	float v1,v2,a;
	system("cls");
	system("COLOR 0A");
	printf("\n\n\n\t\t\t\t Elegiste triangulo");
   	printf("\n\n\n\t\t\t\t Dame la base: ");
	scanf("%f",&v1);
	printf("\n\n\n\t\t\t\t Dame la altura: ");
	scanf("%f",&v2);
	a=(v1*v2)/2;
	printf("\n\n\n\t\t\t\t El area del Triangulo es:%f\n",a);
}

void rombo(void)
{
	float v1,v2,a;
	system("cls");
	system("COLOR 0A");
	printf("\n\n\n\t\t\t\t Elegiste Rombo");
	printf("\n\n\n\t\t\t\t Dame la DIAGONAL: ");
	scanf("%f",&v1);
	printf("\n\n\n\t\t\t\t Dame la diagonal: ");
	scanf("%f",&v2);
	a=(v1*v2)/2;
	printf("\n\n\n\t\t\t\t El area del Rombo es %f\n",a);
}

void romboide(void)
{
	float v1,v2,a;
	system("cls");
	system("COLOR 0A");
	printf("\n\n\n\t\t\t\t Elegiste Romboide");
 	printf("\n\n\n\t\t\t\t Dame la Base: ");
	scanf("%f",&v1);
	printf("\n\n\n\t\t\t\t Dame la Altura: ");
	scanf("%f",&v2);
	a=(v1*v2);
	printf("\n\n\n\t\t\t\t El area es %f\n",a);
}



