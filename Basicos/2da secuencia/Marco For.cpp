#include<stdio.h>
#include<conio.h>
int main (void)
{
	int d, c, j, i;
	
	for(d=0; d<80; d++)
		{
			printf("*");
		}
	printf("\n");
		
	for(c=0; c<23; c++)
		{
		printf("*");
		
			for(j=1; j<79; j++)
			{
				printf(" ");
			}
		printf("*");
		
		printf("\n");
		}
		
	for(i=0; i<80; i++)
		{
			printf("*");		
		}
	getch();
}
