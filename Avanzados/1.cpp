#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int mcd (int m, int n)
{
if (m % n == 0) return n;
else return (mcd(n, m % n));
}
int main(){
    int a,b,res;
printf("Escriba dos numeros: ");
scanf("%d",&a);
scanf("%d",&b);
res=mcd(a,b);
printf("%d",res);
getch();
}
