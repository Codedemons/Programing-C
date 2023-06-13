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
				if(letra[i]=='e')
				vocal++;
						if(letra[i]=='i')
						vocal++;
								if(letra[i]=='o')
								vocal++;
										if(letra[i]=='u')
										vocal++;

else
{
			if(letra[i]=='b')
		vocal++;
				if(letra[i]=='c')
				vocal++;
						if(letra[i]=='d')
						vocal++;
								if(letra[i]=='f')
								vocal++;
										if(letra[i]=='g')
										vocal++;	
											if(letra[i]=='h')
		vocal++;
				if(letra[i]=='j')
				vocal++;
						if(letra[i]=='k')
						vocal++;
								if(letra[i]=='l')
								vocal++;
										if(letra[i]=='m')
										vocal++; 		if(letra[i]=='n')
		vocal++;
				if(letra[i]=='ñ')
				vocal++;
						if(letra[i]=='p')
						vocal++;
								if(letra[i]=='q')
								vocal++;
										if(letra[i]=='r')
										vocal++; 		if(letra[i]=='s')
		vocal++;
				if(letra[i]=='t')
				vocal++;
						if(letra[i]=='v')
						vocal++;
								if(letra[i]=='w')
								vocal++;
										if(letra[i]=='x')
										vocal++;
																		if(letra[i]=='y')
								vocal++;
										if(letra[i]=='z')
										vocal++;
										
										
}
	} 
	
			printf ("\n\t\t\t\t Son %i vocales", vocal);
			printf ("\n\t\t\t\t Son %i consonantes", consonante);	
	getch();
}
