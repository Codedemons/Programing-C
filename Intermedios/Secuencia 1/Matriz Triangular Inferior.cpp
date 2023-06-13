
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int main (void)

{
	int datos[3][3];
	int valor;
	int f,c;
	for (f=0; f<3; f++)
		for (c=0; c<3; c++)
		
	if(f<c)
	{
			datos[f][c]=0;
				}else{
	printf("ingrese un numero");
	scanf("%d",&valor);
  		datos[f][c]=valor;
  		
 	 }
	
	
		for (f=0; f<3; f++)
		{
		for (c=0; c<3; c++)
		{
			printf("%d",datos[f][c]);
			printf("\t");
		}
		printf("\n");
	}
getch();
}


