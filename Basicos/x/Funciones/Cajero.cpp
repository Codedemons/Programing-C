#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void menu(void);
void FuncA(void);
void FuncB(void);
void FuncC(void);
void FuncD(void);
float saldo2;
int main(void)
{system("color 0A");
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

	printf("\n\n\n\n\t\t\t\t\t\t BANCOMER");
	printf("\n\n\n\n\t\t\t\t\t\t A) Consultar saldo");
	printf("\n\n\n\n\t\t\t\t\t\t B) Depositar");
	printf("\n\n\n\n\t\t\t\t\t\t C) Retiro");
	printf("\n\n\n\n\t\t\t\t\t\t Salir");
	printf("\n\n\n\n\t\t\t\t\t\t Opcion: ");	
}
void FuncA(void)
{
		system("cls");
		printf("\n\n\n\t\t\t\t\t\t\t\t Tu saldo actual es de:$%.2f", saldo2);	
		getch();

}

void FuncB(void)
{
	float dep;
	system("cls");
	printf("\n\n\n\t\t\t\t\t\t\t\t Cuanto quieres depositar: "); 
	scanf("%f", &dep);
	saldo2=saldo2+dep;
	printf("\n\n\n\t\t\t\t\t\t\t\t Tu deposito es de:%.2f",dep); 
	getch();
}

void FuncC(void)
{
	float ret;
						system("cls");
					printf("\n\n\n\t\t\t\t\t\t\t\t Cuanto quieres retirar: ");
					scanf("%f", & ret);
					if(saldo2<ret)
					{printf("\n\n\n\t\t\t\t\t\t\t\t Usted ya no tiene saldo"); 	getch();}
				else{
					saldo2=saldo2-ret;
					printf("\n\n\n\t\t\t\t\t\t\t\t El retiro es:%.2f", ret);
}
}


void FuncD(void)
{
	system("cls");
	printf("Gracias");
}
