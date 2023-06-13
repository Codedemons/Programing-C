#include<stdio.h>
#include<conio.h>

int main(void)
{
float temp;

printf("Dame la temperatura: ");
scanf("%f",&temp);

if(temp<0)
	printf("Es solido");

else

	if(temp>100)
		printf("Es gaseoso");

	else 

		printf("Es liquido");

getch();

}
