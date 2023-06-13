#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
# define N 8

int llena(int v[8]);
int shell(int v[8]);
void imprime(int v[8]);

int i,j,K;
int incre[3]={5,3,1};
int numinc=3;
int numi,salto;

main()
{
	int X[100]={0};
	imprime(X);
	X[100]=llena(X);
   	printf("\n Los numeros ingresados sin ordenadar quedan como:\n");
	imprime(X);
	X[100]=shell(X);
   	printf("\n Los numeros ingresados si son ordenados quedan como:\n");
	imprime(X);
	getch();
}

int llena(int v[8])
{
	for(i=0;i<N;i++) 
	{
		printf( "X[%i] = ",i);
		scanf("%d",&v[i]);
   }
	return v[8];
}

int shell(int X[8])
{
	for (numi=0;numi<3;numi++) 
	{
		salto = incre[numi];
		for (j=salto;j<N;j++)
		{
            printf("Estoy analizando vectores de %d\n", incre[numi]);
			K=X[j];

		  i=j-salto;

			while(i>=0)
			{
				if(K<X[i])
				{
					X[i+salto]=X[i];
					X[i]=K;
				}
			i=i-salto;
			}
		}
	}
}

void imprime(int v[8])
{

	for(i=0;i<N;i++) 
	{
		printf("X[%i]=%d\n",i,v[i]);
	}
}
