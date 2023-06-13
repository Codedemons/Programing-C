#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main (void)
{	
int f, c; 
int i=0;
int matriz[3][3]={0};	
system("color 0A");

for(f=0; f<3; f++)
{
for(c=0; c<3; c++)
{
	
if(i>3)
{i=0;}
	
if(i==0)
{matriz[f][c]=1;}
	
	i++;	
}

}

for(f=0; f<3; f++)	
{	
	
for(c=0; c<3; c++)		
{

printf("%i",matriz[f][c]);

}
printf("\n");

}
	getch();
}

