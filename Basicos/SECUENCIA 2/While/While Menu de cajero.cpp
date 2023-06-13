# include <stdio.h>
# include <conio.h>
# include <stdlib.h>


int main (void)
{//inicio del Programa


	char A, B, C, D, a, b, c, d, opcion;
	float saldo, dinero;
	int donacion;
	
	saldo=0;

	system("color 97");	


	printf("\t\t\t\t\t\t Bienvenido a BAMCOMER\n\n");
	printf("CAJERO BANCOMER\n\n\n");
	printf("A) Consultar Saldo\n");
	printf("B) Depositar\n");
	printf("C) Retirar\n");
	printf("D) Salir\n");
	printf("\t\t Opcion: ");
	scanf(" %c",& opcion);


while(opcion!='D')
{//Inicio del While


switch(opcion)
{//Inicio del Switch


	case 'A':
	{
	

	printf("ESCOJIO CONSULTAR SU SALDO\n");
	printf("Su saldo es: %f", saldo);


	getch();

}
break;


	case 'a':
	{
	
	
	printf("ESCOJIO CONSULTAR SU SALDO\n");
	printf("Su saldo es: %f", saldo);


	getch();

}
break;


	case 'B':
	{
	
	printf("USTED ESCOJIO DEPOSITAR\n");
	printf("De cuanto es el monto que va a depositar: ");
	scanf("%f",& dinero);


	saldo=saldo+dinero;


	getch();

}
break;


	case 'b':
	{
		
	
	printf("USTED ESCOJIO DEPOSITAR\n");
	printf("De cuanto es el monto que va a depositar: ");
	scanf("%f",& dinero);

	
	saldo=saldo+dinero;
	
	
	getch();
	
}
break;


	case 'C':
	{//Principio del caso C
	
	printf("USTED ESCOJIO RETIRAR\n");
	printf("De cuanto es el monto a retirar: ");
	scanf("%f",& dinero);


	if(dinero<saldo)
	{//Inicio de IF para retiro
	
	saldo=saldo-dinero;
	
	printf("Su saldo restante es: %f", saldo);
	
	
	}//Final de IF para retiro
	else
		printf("No puede retirar mas de lo que tiene");
		
		


	


	getch();

}// Final del caso C
break;



	case 'c':
	{//Principio del caso c
	

	printf("USTED ESCOJIO RETIRAR\n");
	printf("De cuanto es el monto a retirar: ");
	scanf("%f",& dinero);


	if(dinero<saldo)
	{//Inicio de IF para retiro
	
	saldo=saldo-dinero;
	
	printf("Su saldo restante es: %f", saldo);
	
	
	}//Final de IF para retiro
	else
		printf("No puede retirar mas de lo que tiene");
		
		

	
	


	getch();


}//Final del caso c
break;


	default:
	{
	

	printf("Opcion invalidad");

	
	getch();
	
}
break;
}// Final del Switch


system("cls");


	printf("\t\t\t\t\t\t Bienvenido a BAMCOMER\n\n");
	printf("CAJERO BANCOMER\n\n\n");
	printf("A) Consultar Saldo\n");
	printf("B) Depositar\n");
	printf("C) Retirar\n");
	printf("D) Salir\n");
	printf("\t\t Opcion: ");
	scanf(" %c",& opcion);


}//Final del While


getch();


}//Final del programa




