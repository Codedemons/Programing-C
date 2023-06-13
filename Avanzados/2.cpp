#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int mult(int a,int b);
int main()
{
int a, b, producto;
printf("\n Introduce dos enteros a y b (b>=0): ");
scanf("%d",&a);
scanf("%d",&b);
producto=mult(a,b);
printf("\n El producto de ambos es: %d\n",producto);
system ("pause");
return 0;
}
int mult(int a,int b){
if (b==0) return 0;
else return (a+mult(a,b-1));}
