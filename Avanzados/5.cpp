#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int nFibonacci(int);

int nFibonacci(int n)
{
 if(n==0) 
 	return 0;
 else
  	if(n==1) 
  		return 1;
   	else 
   		return (nFibonacci(n-2)+nFibonacci(n-1));
}

int main()
{int x;
printf("Escribe un numero: ");
scanf("%d",&x);
 for(int t=1;t<=x;t++)
  {
   printf("%d",nFibonacci(t));
  }
 system("pause");
 return 0; 
 getch();
}


