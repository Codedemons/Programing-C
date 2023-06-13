#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void)
{
	int tabla, i=0;
	printf("Da la tabla que quieres: ");
	scanf("%d",&tabla);
	do
	{		//inicio do while
		i++;
		printf("%d x %d = %d \n", tabla, i, tabla*i);
	}while(i<10);		//fin do while
getch();
}
