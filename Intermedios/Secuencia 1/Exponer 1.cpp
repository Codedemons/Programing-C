#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)

{
	char letra[12];
	int i, meses_con_31=0, meses_menos_30=0;
	system("color 0A");	
	
	for (i=0; i<12; i++)
	{
	printf("\n\t\t\t\t Escribe los meses:  ");
	scanf("%s",&letra[i]);
	}
	
	for(i=0 ; i<12; i++)
	{
		if(letra[i]=='e')
		meses_con_31++;
		else
				if(letra[i]=='m')
				meses_con_31++;
				else
						if(letra[i]=='m')
						meses_con_31++;
						else
								if(letra[i]=='j')
								meses_con_31++;
								else
										if(letra[i]=='a')
										meses_con_31++;
										else
												if(letra[i]=='o')
												meses_con_31++;
												else
														if(letra[i]=='d')
														meses_con_31++;
														else

											meses_menos_30++;

	} 

			printf ("\n\t\t\t\t Son %i meses con 31 dias", meses_con_31);
			printf ("\n\t\t\t\t Son %i meses con menos de 31 dias", meses_menos_30);	
	getch();
}
