#include<stdio.h>
#include<conio.h>

int main (void)

{
	int i,j;
	
	for(i=1; i<=10; i++)
	{
		for(j=1; j<11; j++)
		{
			printf("%ix%i=%i \n",i,j,i*j); // Con la diagonal"t" se pone en medio 
			
		}
		printf("\n\n\n");
	}
	getch();
}
