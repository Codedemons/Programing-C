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
    strrev(palabra1);
	printf("palabra1=%s\n", palabra1);
	getch();
}
