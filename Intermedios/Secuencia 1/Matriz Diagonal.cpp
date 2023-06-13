#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main (void)
{
	int datos[3][3]={0};
	int f,c,valor,numero;
	system("color 0A");
	
	for (f=0; f<3; f++)
	for (c=0; c<3; c++)
		
	if(f==c && f==0){
	printf("\n \t \t \t \t \t \t \t \t \t  Da valor: ");
	scanf("%d",&valor);
	datos[f][c]=valor;
					}   
	   else
	if(f==c && f==1){
	printf("\n \t \t \t \t \t \t \t \t \t  Da valor: ");
	scanf("%d",&valor);
	datos[f][c]=valor;
    				  }
      else 
    if(f==c && f==2){
	printf("\n \t \t \t \t \t \t \t \t \t  Da valor: ");
	scanf("%d",&valor);
	datos[f][c]=valor;
					}
	{
  		datos[f][c]=0;
 	}
	
		for (f=0; f<3; f++)
		{
			for (c=0; c<3; c++)
			{
			printf("\t%d",datos[f][c]);
			}
		printf("\n");
		}
	getch();
}
