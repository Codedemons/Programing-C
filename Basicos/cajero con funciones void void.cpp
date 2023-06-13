#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
void menu(void);
void FuncA(void);
void FuncB(void);
void FuncC(void);
void FuncD(void);
float saldo2;
int main(void)
{system("color 0A");
 setlocale(LC_ALL,"");
	char op;
	do
{
	system("cls");
	menu();
	scanf("%c",&op);
	switch(op)
	{
		case 'A': FuncA(); getch; break;
		case 'B': FuncB(); getch; break;
		case 'C': FuncC(); getch; break;
		case 'D': FuncD(); getch; break;
		case 'a': FuncA(); getch; break;
		case 'b': FuncB(); getch; break;
		case 'c': FuncC(); getch; break;
		case 'd': FuncD(); getch; break;
		default: printf("Mal");
	}
}while(op!='d' and op!='D');//While
}//principal

void menu(void)
{
		printf("\n\n\n\n");
		printf("\t\t\t\t\t=========================\n");
		printf("\t\t\t\t\t||***CAJERO BANCOMER***||\n");
		printf("\t\t\t\t\t=========================\n");
		printf("\t\t\t\t\t|     a) Consultar      |\n");	    	
		printf("\t\t\t\t\t|     b) Depositar      |\n");
		printf("\t\t\t\t\t|     c) Retirar        |\n");
		printf("\t\t\t\t\t|     d) Salir          |\n");
		printf("\t\t\t\t\t|_______________________|");
		printf("\n\t\t\t\t\tTipo de transacción: ");		    						
}					 
void FuncA(void)
{
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t\t\t    _______________________________________");
		printf("\n\t\t\t\t   Tu saldo actual es de:$%.2f      \n", saldo2);
		printf("\t\t\t\t    _______________________________________");	
		getch();

}

void FuncB(void)
{
	float dep;
	system("cls");
	printf("\n\n\n\n");
	printf("\t\t\t\t    _______________________________________");
	printf("\n\t\t\t\t\tCuanto quieres depositar: "); 
	scanf("%f", &dep);
	saldo2=saldo2+dep;
	printf("\t\t\t\t    _______________________________________");
	printf("\n\t\t\t\t\tTu deposito es de:%.2f \n",dep); 
	printf("\t\t\t\t    _______________________________________");
	getch();
}

void FuncC(void)
{
	float ret;
					system("cls");
					printf("\n\n\n\n");
					printf("\t\t\t\t_______________________________________\n");
					printf("\t\t\t\tIngrese el monto a retirar: ");
					scanf("%f", & ret);
					if(saldo2<ret)
							{
									printf("\t\t\t\t _______________________\n");
    								printf("\t\t\t\t|Usted ya no tiene saldo|\n");
									printf("\t\t\t\t|_______________________|\n"); 	
								getch();
							}
							
						else{
								saldo2=saldo2-ret;
								printf("\n");
								printf("\t\t\t\t_______________________________________\n");
								printf("\t\t\t\tEl retiro es:%.2f   \n", ret);
								printf("\t\t\t\t_______________________________________");
								getch();
							}
}


void FuncD(void)
{
	system("cls");
	printf("\n\n\n\n");
printf("\t\t\t\t                               _\n");               
printf("\t\t\t\t  __ _   _ __    __ _    ___  (_)   __ _   ___\n"); 
printf("\t\t\t\t / _` | | '__|  / _` |  / __| | |  / _` | / __|\n");
printf("\t\t\t\t| (_| | | |    | (_| | | (__  | | | (_| | \__ \ \n");
printf("\t\t\t\t  \__, | |_|      \__,_|  \__  | | _|  \__,_| |___/ \n");
printf("\t\t\t\t |___/\n");   
printf("\t\t\t\tNo olvide retirar su tarjeta");
	
}
















