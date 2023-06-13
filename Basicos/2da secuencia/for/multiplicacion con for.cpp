#include<stdio.h>
#include<conio.h>

int main (void)
{
	int i;
	int a,b;
	int s=0;
	
	printf("dame valor de a  :");
	scanf("%i",&a);
		printf("dame valor de b  :");
	scanf("%i",&b);
	
	for(i=1; i<=a; i++)
	{
	s=s+b;
	}
	
	printf("%i",s);
	
}

