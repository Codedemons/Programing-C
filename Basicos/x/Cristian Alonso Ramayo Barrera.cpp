#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

void menu(void);
void edad(void);
void estacionamiento(void);
void sueldo(void);
void numero_entero(void);
void dias_de_la_semana(void);
void calificacion(void);
void temperatura(void);
void tabla(void);
void numero_para_sumar(void);
void imprime(void);
	
int main(void)
{
	int opcion;
	setlocale(LC_ALL,"");
	do
	{
	menu();
	scanf("%d",&opcion);
	system("cls");
	
	switch(opcion)
	{
		case 1: edad(); system("cls"); break;
		case 2: estacionamiento(); system("cls"); break;
		case 3: sueldo(); system("cls"); break;
		case 4: numero_entero(); system("cls"); break;
		case 5: dias_de_la_semana(); system("cls"); break;
		case 6: calificacion(); system("cls"); break;
		case 7: temperatura(); system("cls"); break;
		case 8: tabla(); system("cls"); break;
		case 9: numero_para_sumar(); system("cls"); break;
		case 10: imprime(); system("cls"); break;
		default: 	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Opcion Invalida \n \n \t \t \t \t \t \t \t \t \t Adios...Hecho por Cristian Alonso Ramayo Barrera \n \n \t \t \t \t \t \t \t \t \t Paseme profe :´v"); getch();

	}
	}while(opcion!=11);
	system("cls");
}

	void menu(void)
	{
	system("color 0A");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t MENUS DE PROGRAMA  \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t PROGRAMAS PRIMERA SECUENCIA \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 1-Adivina tu edad \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2-Calcula el cobro de una caseta de estacionamiento \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 3-Lee un sueldo y le aumenta el 15% \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 4-Te dice si un numero entero es positivo, negativo o neutro \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 5-Dias de la semana con numeros \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t PROGRAMAS SEGUNDA SECUENCIA \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 6-Te dice que tan bueno alumno eres \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 7-Te dice si es un estado liquido, solido y gaseoso \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 8-Ingresa el numero y te dara su tabla de multiplicar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 9-Ingresa el numero de veces que quieras sumarlo \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 10-Imprime del 1 al 100 \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 11-Salir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingresa la opción: ");
	}
	
	void edad(void)
	{
		system("cls");
		int fecha_actual, fecha_de_nacimiento, edad;
		system("color 17");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Elegiste el programa de Edad");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Dame el año actual: ");
		scanf("%d",&fecha_actual);
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Dame año de nacimiento: ");
		scanf("%d",&fecha_de_nacimiento);
		edad=fecha_actual-fecha_de_nacimiento;
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Tu edad es: %d",edad);
		getch();	
	}
	
	void estacionamiento(void)
	{
		system("cls");
		int tarifa, horas, cobro;
		system("color 47");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Elegiste el programa de Estacionamiento\n");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Dame la tarifa: ");
		scanf("%d",&tarifa);
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Dame el numero de horas: ");
		scanf("%d",&horas);
		cobro=tarifa*horas;
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t El pago es de: %d",cobro);	
		getch();
	}
	
	void sueldo(void)
	{
		system("cls");
		float sueldo, aumento, ns;
		system("color 17");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Ingresa el sueldo: ");
		scanf("%f",&sueldo);
		if(sueldo<=3000)
		aumento=sueldo*0.15;
		ns=aumento+sueldo;
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t El sueldo es: %f",ns);
		getch();
	}
	
	void numero_entero(void)
	{
		system("cls");
		int numero;
		system("color 47");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Ingrese el numero: ");
		scanf("%f",&numero);
  	    if(numero>0)
		printf("\t \t \t \t \t \t \t \t \t Es positivo");
		if(numero<0)	
		printf("\t \t \t \t \t \t \t \t \t Es negativo");
		if(numero==0)	
		printf("\t \t \t \t \t \t \t \t \t Es neutro");	
		getch();
	}
	
	void dias_de_la_semana(void)
	{
		system("cls");
		int numero;
		system("color 17");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Ingrese un numero de 1 a 7: ");
		scanf("%d",&numero);
    	if(numero==1)	
		printf("\t \t \t \t \t \t \t \t \t Es lunes");
   		if(numero==2)	
		printf("\t \t \t \t \t \t \t \t \t Es martes");
		if(numero==3)	
		printf("\t \t \t \t \t \t \t \t \t Es miercoles");
		if(numero==4)	
		printf("\t \t \t \t \t \t \t \t \t Es jueves");
		if(numero==5)	
		printf("\t \t \t \t \t \t \t \t \t Es viernes");
		if(numero==6)	
		printf("\t \t \t \t \t \t \t \t \t Es sabado");
		if(numero==7)	
		printf("\t \t \t \t \t \t \t \t \t Es domingo");
		getch();
	}

	void calificacion(void)
	{
		system("cls");
		float calificacion;
		system("color 47");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Ingresa tu calificacion de 10 a 100: ");
		scanf("%f",&calificacion);
		if(calificacion<0)
		printf(" \t \t \t \t \t \t \t \t \t No valido");
	else
		if(calificacion<=69)
			printf("\t \t \t \t \t \t \t \t \t Reprobado");
		else
			if(calificacion<=80)
				printf("\t \t \t \t \t \t \t \t \t Regular");
			else
				if(calificacion<=90)
					printf("\t \t \t \t \t \t \t \t \t Buena");
				else
					if(calificacion<=100)
						printf("\t \t \t \t \t \t \t \t \t Excelente");
					else
						printf("\t \t \t \t \t \t \t \t \t No valido");
		getch();
	}
	
	void temperatura(void)
	{
		system("cls");		
		int temperatura;
		system("color 17");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Ingresa la temperatura de 0 a 100: ");
		scanf("%f",&temperatura);

if(temperatura<0)
	printf("\t \t \t \t \t \t \t \t \t Es solido");

else

	if(temperatura>100)
		printf("\t \t \t \t \t \t \t \t \t Es gaseoso");

	else 

		printf("\t \t \t \t \t \t \t \t \t Es liquido");
		getch();
	}
	
	void tabla(void)
	{
		system("cls");
		int tabla, i=0;
		system("color 47");
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Da la tabla que quieres: ");
		scanf("%d",&tabla);
		while(i<10)
		{		
		i++;
		printf("\t \t \t \t \t \t \t \t \t %d x %d = %d \n", tabla, i, tabla*i);
		}
		getch();
	}
	
	void numero_para_sumar(void)
	{
		system("cls");
		float suma,numero;	
		system("color 17");											
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Ingresa un numero para sumar: ");
		scanf("%f",&numero);
		while(numero>0)
		{
		suma=suma+numero;
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t Ingresa un numero para sumar: ");
		scanf("%f",&numero);
		}
		printf("\n \n");
		printf("\t \t \t \t \t \t \t \t \t La sumatoria es: %f",suma);
		getch();
	}
	
	void imprime(void)
	{
		system("cls");
		int i=0;
		system("color 47");
		while(i<100)
		{
		i++;
		printf("\t \t \t \t \t \t \t \t \t %d \n",i);
		}
		getch();
	}
