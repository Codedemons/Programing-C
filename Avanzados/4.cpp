#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int AckermanR(int n,int m)
{
 if (!n) 
    return (m+1);
 else if (!m) 
    return (AckermanR(n-1, 1));
 else 
    return (AckermanR(n-1, AckermanR(n,m-1)));
}
int main()
{
    int m, n;
    printf("Ingresa el valor de m: ");
    scanf("%d",&m);
    printf("Ingresa el valor de n: ");
    scanf("%d",&n);
    printf("Ackerman %d, %d = ",AckermanR(n,m));
    printf("_____________________________");

    getch();
    return(0);
}
