#include<stdio.h>
#include<conio.h>
int main (void)
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<11;j++)
		{
			printf("%d x %d = %d \n", i,j,i*j);
		}
		printf("\n\n");
	}
	getch();
}
