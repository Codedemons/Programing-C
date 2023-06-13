#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//prototipos de las funciones
 void menu(void);
 void suma(void);
 void resta(void);
 void multiplicacion(void);
 void division(void);
 
 // variables globales
 int main(void)
 {
 	int op; 
 	do
	 {
 		system ("cls");
 		menu(); 
 		scanf("%d",&op);
 		switch(op)
 		{
 			case 1:suma(); getch(); break;
 			case 2:resta(); getch(); break;
 			case 3:multiplicacion(); getch (); break; 
 			case 4: division(); getch(); break; 
 		    default: printf("no valido");
		 }//fin switch
	 }while(op!=5);
	 
	 getch();
 }//fin main
 			void suma (void)
				{
				float a, b, r;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el primer valor: ");
				scanf("%d",&a);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el segundo valor: ");
				scanf("%d",&b);
				r=a+b;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El resultado de la suma es: %d",r);
				}
 			void resta (void)
				{
				float a, b, r;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el primer valor: ");
				scanf("%d",&a);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el segundo valor: ");
				scanf("%d",&b);
				r=a+b;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El resultado de la resta es: %d",r);
				}
 			void multiplicacion (void)
				{
				float a, b, r;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el primer valor: ");
				scanf("%d",&a);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el segundo valor: ");
				scanf("%d",&b);
				r=a+b;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El resultado de la multiplicacion es: %d",r);
				}
 			void division (void)
				{
				float a, b, r;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el primer valor: ");
				scanf("%d",&a);
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t Dame el segundo valor: ");
				scanf("%d",&b);
				r=a+b;
				printf("\n \n");	
				printf("\t \t \t \t \t \t \t \t \t El resultado de la division es: %d",r);
				}
 
