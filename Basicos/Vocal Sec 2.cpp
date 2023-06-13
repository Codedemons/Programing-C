#include<stdio.h>
#include<conio.h>

int main (void)
{
	char vocal;
	
	printf(" Dame una vocal<a...u>: ");
	scanf("%c",&vocal);
	switch(vocal)
	{
		case 'a':printf("Es una vocal");break;
		case 'e':printf("Es una vocal");break;
		case 'i':printf("Es una vocal");break;
		case 'o':printf("Es una vocal");break;
		case 'u':printf("Es una vocal");break;
		case 'A':printf("Es una vocal");break;
		case 'E':printf("Es una vocal");break;
		case 'I':printf("Es una vocal");break;
		case 'O':printf("Es una vocal");break;
		case 'U':printf("Es una vocal");break;
		default:printf("No es una vocal");
		
	};
	
getch();

}
