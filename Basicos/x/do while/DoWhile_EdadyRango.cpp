#include<stdio.h>
#include<conio.h>
int main (void)
{
	int e;			//edad
	
	do
	{				//inicio do while
	printf("Ingresa tu edad: \n");
	scanf("%d",&e);
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

	}while(e>0&&e<101);			//fin de do while

	getch();
	printf("No valido");
	getch();
}

