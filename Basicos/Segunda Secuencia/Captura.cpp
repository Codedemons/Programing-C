#include<stdio.h>
#include<conio.h>

int main (void)
{
	int col=1, fil=1;
	
	for(col=0; col<23; col++)
	{
		for(fil=0; fil<=79; fil++)
		printf("*");
		printf("\n");
	}
getch ();
}
