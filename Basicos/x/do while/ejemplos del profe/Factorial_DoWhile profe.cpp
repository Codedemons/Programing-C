
#include<stdio.h>
#include<conio.h>
#include<wchar.h>
#include<locale.h>
int main (void)
	{
	int i=1,fac,num;
	setlocale(LC_ALL,"");
	printf("ingresa un número para calcular su factorial: ");
	scanf("%d",&num);														
	do
	{
		i++;
		fac=fac*i;
	}while(i<num&&num>=1);
	
	printf("El factorial es: %d",fac);
	getch();
	}
