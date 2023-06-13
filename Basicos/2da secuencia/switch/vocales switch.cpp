
#include <stdio.h>
#include <conio.h>


int main (void)

{
char L;

printf("ingrese la letra  para determinar si es una vocal:     ");
scanf("%c",&L);

switch (L)
{
case 'a': printf("es una vocal"); break;	
case 'A': printf("es una vocal"); break;
case 'e': printf("es una vocal"); break;
case 'E': printf("es una vocal"); break;
case 'i': printf("es una vocal"); break;
case 'I': printf("es una vocal"); break;
case 'O': printf("es una vocal"); break;
case 'o': printf("es una vocal"); break;
case 'U': printf("es una vocal"); break;
case 'u': printf("es una vocal"); break;
default : printf("no es una vocal");

};
	
	getch ();
}
