#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int max(int n,int a[0]);
int suma(int num1, int num2);

int suma(int num1, int num2){
return num1 + num2;}
int max(int n,int a[0])
{
    if(n==1) return a[0];
    if(a[n-1]>max(n-1,a))return a[n-1];
    else return max(n-1,a);
}

int main(){
int a[10];
int may;
float prom;
int i; 
int total = 0; 
int j=9;
printf("Ingrese numeros: ");
for ( i = 0; i <j; i++ ) {
scanf("%d",&a[i]);
total = suma(total, a[ i ]);
may=max(j,a);
} 
prom=(total*1.0)/9;
printf("El total de los elementos del arreglo es: %d \n",total);
printf("El maximo de los elementos del arreglo es: %d \n",may);
printf("El promedio de los elementos del arreglo es: %d \n",prom);
system("PAUSE");
return 0; 
}


