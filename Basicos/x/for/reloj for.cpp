#include<stdio.h>
#include<conio.h>
int main (void)
{
	int i,j,k;
	
	for(i=0;i<24;i++)
	{
		for(j=0;j<60;j++)
		{
			for(k=0;k<60;k++)
		{
				printf("%i : %i : %i \n", i,j,k);
		}
	}

	}
	getch();
}
