#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,v, suma_par, suma_impar,c1,c2;
	float prom_par,prom_impar;
	
	for(i=0;i<10;i++)
	{
		printf("ingresa un valor: ");
		scanf("%d",&v);
		if(v%2==0)
			{
				suma_par=suma_par+v;
				c1++;
			}
		else
			{
				suma_impar=suma_impar+v;
				c2++;
			}
	}
		prom_par=suma_par/c1;
		printf("el promedio de los pares es: %f \n",prom_par);
		prom_impar=suma_impar/c2;
		printf("el promedio de los impares es: %f", prom_impar);
		getch();
}
