#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void)
{					//incio principal
	char opcion;
	float saldo, deposito, retiro;			//dinero=depositar  o retirar
	system("color 17");

	do
	{										//inicio de  do while
		printf("================================================================================\n\n");
		printf("				***CAJERO BANCOMER***				\n\n\n");
		printf("================================================================================\n\n");
		printf("				a) Consultar saldo \n\n");
		printf("				b) Depositar \n\n");
		printf("				c) Retirar \n\n");
		printf("				d) Salir \n\n\n");
		printf("================================================================================");
		printf("				Opcion: ");
		scanf(" %c",&opcion);
		switch(opcion)
		{									//inicio de switch
			case 'a':
				{	
				printf("\nTu saldo es : %f \n",saldo);
				}
				break;
			case 'b':
				{
				printf("\nIngrese su deposito: \n");
				scanf("%f",&deposito);
				saldo=saldo+deposito;
				printf("su saldo total es: %f\n",saldo);
				}
				break;
			case 'c':
				{
				printf("\nIngrese su retiro: \n");
				scanf("%f",&retiro);
				if(retiro<=saldo)
				{		//inicio if-else
				saldo=saldo-retiro;
				printf("Su saldo total es: %f \n",saldo);
				}		//fin if-else
				else
				printf("saldo insuficiente");
				}
				break;
			default:
				printf("\nInvalido");
		};			//fin de switch
			getch();		//congelar el switch
			system("cls");	
	}while(opcion!='d');							//fin de while
	getch();
}					//fin principal
