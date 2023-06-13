#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int i=0,j=0,numero;
    int matriz[3][3]={0};
do
{
	printf("\n\t\t\t\t Da valor: ");
	scanf(" %d",&numero);
}while(numero==1 || numero==0);
 
	for (i=0;i<3;i++)
	{
		printf("\n");	
		for (j=0;j<3;j++)
		{	
			if(i==j)
		{
			matriz[i][j]=numero;
			printf("\n %d ",matriz[i][j]);}
			else
			{
			matriz[i][j]=0;
			printf("\n %d ",matriz[i][j]);
		}
		printf("\t"); 
		}
}
	 getch();	
}

