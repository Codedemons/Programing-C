#include <stdio.h>
#include <conio.h>

int main (void)

{ 
char L;

printf("Da una letra");
scanf("%c",&L);

switch(L)
	{case 'a': printf("a es una vocal"); break;
	case 'A': printf("A es una vocal"); break;
	
	case 'e': printf("e es una vocal"); break;
	case 'E': printf("E es una vocal"); break;


	case 'i': printf("i es una vocal"); break;
	case 'I': printf("I es una vocal"); break;


	case 'o': printf("o es una vocal"); break;
	case 'O': printf("O es una vocal"); break;


	case 'u': printf("u es una vocal"); break;
	case 'U': printf("U es una vocal"); break;




	default: printf("Esa letra no es una vocal ");
	};
	
	getch();
}
