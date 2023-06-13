#include<stdio.h>
#include<conio.h>
int main(void)
{float  a,b,suma,resta,multiplicacion,division;
int opcion;
printf("MENU DE AREAS\n");
printf("suma\n");
printf("resta\n");
printf("multiplicacion\n");
printf("division\n");
scanf("%d",&opcion);

	if(opcion==1)
	{ printf("valor de a");
      scanf ("%f",&a);
  	  printf("valor de b");
      scanf("%f",&b);
      suma=a+b;
      printf("da el resultado de la suma es:%f",suma);
     getch();
	}
	else
		if(opcion==2)
		{ printf("valor de a");
	      scanf ("%f",&a);
	  	  printf("valor de b");
	      scanf("%f",&b);
	      resta=a-b;
	      printf("da el resultado de la resta es:%f",resta);
	     getch();
		}
		else
			if(opcion==3)
			{ printf("valor de a");
		      scanf ("%f",&a);
		  	  printf("valor de b");
		      scanf("%f",&b);
		      multiplicacion=a*b;
		      printf("da el resultado de la multiplicacion es:%f",multiplicacion);
		     getch();
			}
			else
				if(opcion==2)
				{ printf("valor de a");
			      scanf ("%f",&a);
			  	  printf("valor de b");
			      scanf("%f",&b);
			      division=a/b;
			      printf("da el resultado de la division es:%f",division);
			     getch();
				}
				else
				printf("no valido");
getch();
}
