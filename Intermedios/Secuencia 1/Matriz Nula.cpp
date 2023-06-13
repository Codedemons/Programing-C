#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main (void)
{	
 int matriz[3][3]={0};	
 int f, c;
system("color 0A");
 
for(f=0; f<3; f++)	
{
	
for(c=0; c<3; c++)		
{

printf("%i",matriz[f][c]);

	matriz[f][c]=1;

}
printf("\n");

}
	getch();
}

