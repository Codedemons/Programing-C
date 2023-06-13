#include<stdio.h>
#include<conio.h>
int main (void)
{
	int e;			//edad
	printf("Ingresa tu edad: \n");
	scanf("%d",&e);
	while(e>0&&e<101)
	{				//inicio while
		if(e<=10)
		{
		if(e>=1)
			printf("ni¤o \n");
		}
		else
			if(e<=17)
			{
			
			if(e>=11)
				printf("Joven\n");
			}
			else
				if(e<=55)
				{
				if(e>=18)
					printf("Adulto\n");
				}
				else
					if(e<=100);
					{
					if(e>=56)
						printf("Senecto\n");
					}
	printf("Ingresa tu edad: \n");
	scanf("%d",&e);
	}			//fin de while
	getch();
	printf("No valido");
	getch();
}

