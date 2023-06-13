#include<stdio.h>
#include<conio.h>
const int max = 1000;
int i,j,aux,cn,n[max];
 
int main()
{
	printf("Dimension del Vector: ");
	scanf("%d",&cn);
 
	for(i=0;i<cn;i++)
	{
		printf("Ingrese el elemento %i: ",i+1);
		scanf("%d",&n[i]);
	}
	for(i=1; i<cn; i++)
	{
		for(j=0; j<cn-i; j++)
		{
			if(n[j]>n[j+1])
			{
			    aux    = n[j+1];
				n[j+1] = n[j];
				n[j]   = aux;
			}
		}
	}

	for(i=0;i<cn;i++)
	{
		printf("\n%d",n[i]);
	}
	return 0;
}
