#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char original[15];
	char copia[15];
	printf("Da cadena original: ");
	gets(original);
    strcpy(copia, original);
    printf("original=%s\n", original);
    printf("copia=%s\n", copia);
	getch();
}
