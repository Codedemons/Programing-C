#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
//prototipos de las funciones
void menu(void);
void suma(void);
void resta(void);
															
//variables globales

int main(void)
{
	int opcion;
	system("color 17");
	do
	{									
	//inicio de do while
	
	menu();
	scanf("%d",&opcion);
	
	switch(opcion)
	{	
	//inicio de swicth
	case A: (); getch(); break;	
	case B: suma(); getch(); break;	
	case C: resta(); getch(); break;	
	case D: division(); getch(); break;	
	default: printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Elegiste salir");
	getch();
	}
	//final de swicth
	
	system("cls");
	
	}while(opcion!=D);				
	//final de do while

getch();
}
//principal
	
//funciones
	
	void menu(void)
	{
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t CAJERO BANCOMER \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t A.- Consultar saldo \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t B.- Depositar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t C.- Retirar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t D.- Salir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");	
	printf("\t \t \t \t \t \t \t \t \t opcion: ");
	
	void suma(void)
	{
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Tu saldo actual es: %f",saldo);
	}
	
	void suma(void)
	{
	float saldo=2000, deposito, retiro;
	printf("\n \n");	
	printf("\t \t \t \t \t \t \t \t \t Cuanto depositaras: ");
	scanf("%f",&deposito);
	saldo=saldo+deposito;
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Tu saldo actual es: %f",saldo);
	}
	
	void resta(void)
	{
	float saldo, retiro;			
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Cuanto retiraras: ");
	scanf("%f",&retiro);
	if(retiro<=saldo)
	{
	saldo=saldo-retiro;
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Tu saldo actual es: %f",saldo);
	}
	else
	{
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t No tiene suficiente saldo");
	}
	}

