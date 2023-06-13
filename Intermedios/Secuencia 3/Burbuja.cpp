#include<stdio.h>
#include<conio.h>

int burbuja(int datos[10]);
int llena_matriz(int datos[10]);
void imprimir(int mat[10]);

int main ()
{
     int mat[10]={0};
     printf("\n Vector vacio: ");
     imprimir(mat);
     mat[10]=llena_matriz(mat);
     printf("\n Vector lleno: ");
     imprimir(mat);
     printf("\n Antes de entrar a la burbuja: ");
     getch();
     mat[10]=burbuja(mat);
     imprimir(mat);
getch();
}

int llena_matriz(int datos[10])
{
int f=0;
	for(f=0; f<10;f++)
	{
   	printf("\n Dame un dato: ");
   	scanf("%d",&datos[f]);
   }

   return datos[10];

}

void imprimir(int mat[10])
{
   	for(int f=0;f<10;f++)
		{
			printf("%d",mat[f]);
		}
 }

int burbuja(int datos[10])
{

     for (int x=0; x<10; x++)     
     {
     	for (int y=0; y<10; y++)       
      {
   		if(datos[x]>datos[y])
      	{
      		int temp= datos[x];
         	datos[x]=datos[y];
         	datos[y]=temp;
      	}
      }
      }
return datos[10];
}

