#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void)
{
	system("color 0A");
	char *p;
	int i, vocales=0, consonantes=0;
	char mat[10]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	p=mat;
	
	for(i=0; i<10; i++)
	{
		if(*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
		{
			vocales++;
		}
		else
		{
			consonantes++;
		}
		p++;
	}
	printf("\n Vocales:%d",vocales);
	printf("\n Consonantes:%d",consonantes);
	getch();
}
