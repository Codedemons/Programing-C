#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
//prototipos de fuciones
void menu(void);
void saldo(void);
void deposito(void);
void retiro(void);
float saldo1, deposito1, retiro1;
//variables globales
int main(void)
{					
//inicio principal
	char opcion;

	system("color 17");

	do
	{										
	//inicio de  do while
		system("cls");	
		menu();
		scanf(" %c",&opcion);
		
		switch(opcion)
		{									
		//inicio de switch
			case 'A': saldo(); getch(); break;
			case 'B': deposito(); getch(); break;
			case 'C': retiro(); getch(); break;
			default: printf("\n oprima d para salir \n saliendo...");
		};			
		//fin de switch
		
			getch(); 
			//congelar el switch

	}while(opcion!='d');	
	//fin de while
	
	getch();
}					
//fin principal

		//funciones
		void menu(void)
		{
	printf("\n\n\n\t\t\t\t BANCOMER");
	printf("\n\n\n\n\t\t\t A) Consultar saldo");
	printf("\n\n\n\n\t\t\t B) Depositar");
	printf("\n\n\n\n\t\t\t C) Retiro");
	printf("\n\n\n\n\t\t\t D) Salir");
	printf("\n\n\n\t\t\t\t Opcion: ");
		}
		
		void saldo(void)
		{
		system("cls");
			printf("Tu saldo actual es de: %f",saldo1);	
		}
		
		void deposito(void)
		{

			printf("\n\n\n\t\t\t\t Cuanto quieres depositar: ");
			scanf("%f",&deposito1);
			saldo1=saldo1+deposito1;
			printf("\n\n\n\t\t\t\t Tu deposito es de: %f",saldo1);
		}
		
		void retiro(void)
		{

			printf("\n\n\n\t\t\t\t Cuanto quieres retirar: ");
			scanf("%f",&retiro1);
			if(retiro1<=saldo1)
			{		//inicio if-else
			saldo1=saldo1-retiro1;
			printf("\n\n\n\t\t\t\t El retiro es de : %f",saldo1);	
			}
			else
			printf("\n\n\n\t\t\t\t Usted ya no tiene saldo");
		}
