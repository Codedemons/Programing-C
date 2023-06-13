#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void)
{				
	char opcion;
	float saldo, deposito, retiro;		
	system("color 17");

	do
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
	scanf("%c", &opcion);
		switch(opcion)
		{								
			case 'A':
				{
				printf("\n \n");
				printf("\t \t \t \t \t \t \t \t \t Tu saldo actual es: %f",saldo);
				}
			case 'B':
				{
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Cuanto depositaras: ");
				scanf("%f",&deposito);
				saldo=saldo+deposito;
				printf("\n \n");
				printf("\t \t \t \t \t \t \t \t \t Tu saldo actual es: %f",saldo);
				}
				break;
			case 'C':
				{
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
				break;
			default:printf(" \t \t \t \t \t \t \t \t \t no valido");
		};		
			getch();		
			system("cls");	
	}while(opcion!='d');						
	getch();
}				
