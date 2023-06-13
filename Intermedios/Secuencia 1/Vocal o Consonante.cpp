#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)

{
	char letra[10];
	int i, vocal=0, consonante=0;
	system("color 0A");	
	
	for (i=0; i<10; i++)
	{
	printf("\n\t\t\t\t Digita las letras:  ");
	scanf("%s",&letra[i]);
	}
	
	for(i=0 ; i<10; i++)
	{
		if(letra[i]=='a')
		vocal++;
		else
				if(letra[i]=='e')
				vocal++;
				else
						if(letra[i]=='i')
						vocal++;
						else
								if(letra[i]=='o')
								vocal++;
								else
										if(letra[i]=='u')
										vocal++;
										else

											consonante++;

	} 

			printf ("\n\t\t\t\t Son %i vocales", vocal);
			printf ("\n\t\t\t\t Son %i consonantes", consonante);	
	getch();
}
