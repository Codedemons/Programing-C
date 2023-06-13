#include<stdio.h>
#include<conio.h>
int main (void)
{
	int k,j,r,i;
	
	for(k=0;k<80;k++)
		{
			printf("*");
		}
	printf("\n");
		
	for(r=0;r<23;r++)
		{
		printf("*");
			for(j=1;j<79;j++)
			{
				printf(" ");
			}
		printf("*");
		printf("\n");
		}
		
	for(i=0;i<80;i++)
		{
			printf("*");		
		}
	getch();
}
