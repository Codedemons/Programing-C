#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char palabra1[15];
    char palabra2[15];
    int i;
    
	printf("Dame una palabra: ");
	gets(palabra1);
	printf("Dame una palabra: ");
	gets(palabra2);
    strcmp( palabra1, palabra2 );
    if(strcmp( palabra1, palabra2 )==0)
    printf("Es Igual");
    else 
    printf("No son iguales");
	getch();
}
