#include<stdio.h>
#include<conio.h>
int main(void)
{
	float v1,v2,r;
	int n;
	printf("Menu de operaciones :)\n");
	printf("1.- Suma: \n");
	printf("2.- Resta: \n");
	printf("3.- Multiplicacion: \n");
	printf("4.- Division: \n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Elegiste suma  \n");
		printf("Ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("Ingrese el segundo valor: ");
		scanf("%f",&v2);
		r=v1+v2;
		printf("El resultado de la suma es: %f",r);
	}
	else
		if(n==2)
		{
			printf("Elegiste la resta  \n");
			printf("Ingrese el primer valor: ");
			scanf("%f",&v1);
			printf("Ingrese el segundo valor: ");
			scanf("%f",&v2);
			r=v1-v2;
			printf("El resultado de la resta es: %f",r);
		}
		else
			if(n==3)
			{
				printf("Elegiste la multiplicacion  \n");
				printf("Ingrese el primer valor: ");
				scanf("%f",&v1);
				printf("Ingrese el segundo valor: ");
				scanf("%f",&v2);
				r=v1*v2;
				printf("El resultado de la multiplicacion es: %f",r);
			}
			else
				if(n==4)
				{
					printf("Elegiste la division  \n");
					printf("Ingrese el primer valor: ");
					scanf("%f",&v1);
					printf("Ingrese el segundo valor: ");
					scanf("%f",&v2);
					r=v1/v2;
					printf("El resultado de la division es: %f",r);
				}
				else

	getch();
}
