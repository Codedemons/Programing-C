#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 3

struct  cadenas
{

	char palabra[50];
	
}cadenas[3];

int main (void)
{
	int i;
	
	
	for(i=0; i<n; i++)
	{
		printf("\t\t\t Dime una palabra: \n\n");
		gets(cadenas[i].palabra);
	}

	for(i=0; i<n; i++)
	{
		printf("%s Tiene % i \n\n",cadenas[i].palabra,strlen(cadenas[i].palabra));
	}
}
