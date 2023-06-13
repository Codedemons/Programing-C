#include<stdio.h>
#include<conio.h>

int main (void)
{
	float aumento, sueldo, ns;
	
	printf("Da el sueldo actual: ");
	scanf("%f",&sueldo);
	 if(sueldo<=3000)
{
	 
	 aumento=sueldo*0.20;
	 ns=aumento+sueldo;
	 
	printf("El sueldo es:%f", ns);
}
	else
	{
	printf("El sueldo es:%f", ns);
	
	aumento=sueldo*0.15;
	ns=sueldo+aumento;
	
	printf("El nuevo sueldo es:%f",ns);
}
	getch();
}
