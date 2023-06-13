#include<stdio.h>
#include<conio.h>

int main (void)
{
int A, B, C;

printf ("ingrese A \n");	
scanf("%i",&A);

printf ("ingrese B\n");	
scanf("%i",&B);

printf ("ingrese C\n");	
scanf("%i",&C);



if(A>B)
	if(A>C)
		printf ("el mayor es A");	
	
else
	printf ("el mayor es C");
     
else 		
	if(B>C)
		printf ("el mayor es B");	
   	else 
 		printf ("el mayor es C");



getch();	
}
