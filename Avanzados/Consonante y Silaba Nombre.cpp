#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void)
{
	system("color 0A");
	char *p;
	int i, vocales=0, consonantes=0;
	char mat[10];
	p=mat;
	
	printf("Cual es tu nombre: ");
	gets(mat);
	
	for(i=0; i<10; i++)
	{
		if(*p=='A' || *p=='a' || *p=='E' || *p=='e' || *p=='I' || *p=='i' || *p=='O' || *p=='o' || *p=='U' || *p=='u')
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
