#include<stdio.h>
#include<conio.h>

int main (void)
{
	int A,B,C;
	
	printf("valor de A :");
		scanf("%d",&A);
	printf("valor de B :"); 
		scanf("%d",&B);
	printf("valor de C :"); 
		scanf("%d",&C);
	if(A>B)
		if(A>C)
			printf("A es mayor");
		else
	  		printf("C es mayor");
	else//B>A 
		if(B>C)
	  		printf("B es mayor");
		else
			printf("C es mayor");     
	getch(); 
}
