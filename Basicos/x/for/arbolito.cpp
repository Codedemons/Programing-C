#include<stdio.h>
#include<conio.h>
int main (void)
{
	int i,j;
	for(i=0;i<20;i++)
	{
		for (j=0;j<=i;j++)
		printf("*");
		printf("\n");
	}
	printf("***\n");
	printf("***");
	getch();
}
