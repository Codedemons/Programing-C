#include<stdio.h>
#include<conio.h>
int main(void)
{
	float v1,v2,r;
	int n;
	printf("Menu de operaciones :)\n");
	printf("ingrese 1 para realizar una suma: \n");
	printf("ingrese 2 para realizar una resta: \n");
	printf("ingrese 3 para realizar una multiplicacion: \n");
	printf("ingrese 4 para realizar una division: \n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("elegiste la suma :) \n");
		printf("ingrese el primer valor: ");
		scanf("%f",&v1);
		printf("ingrese el segundo valor: ");
		scanf("%f",&v2);
		r=v1+v2;
		printf("el resultado de la suma es: %f",r);
	}
	else
		if(n==2)
		{
			printf("elegiste la resta :) \n");
			printf("ingrese el primer valor: ");
			scanf("%f",&v1);
			printf("ingrese el segundo valor: ");
			scanf("%f",&v2);
			r=v1-v2;
			printf("el resultado de la resta es: %f",r);
		}
		else
			if(n==3)
			{
				printf("elegiste la multiplicacion :) \n");
				printf("ingrese el primer valor: ");
				scanf("%f",&v1);
				printf("ingrese el segundo valor: ");
				scanf("%f",&v2);
				r=v1*v2;
				printf("el resultado de la multiplicacion es: %f",r);
			}
			else
				if(n==4)
				{
					printf("elegiste la division :) \n");
					printf("ingrese el primer valor: ");
					scanf("%f",&v1);
					printf("ingrese el segundo valor: ");
					scanf("%f",&v2);
					r=v1/v2;
					printf("el resultado de la division es: %f",r);
				}
				else
					printf("no valido");
	getch();
}
