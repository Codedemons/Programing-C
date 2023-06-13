#include <stdio.h>
#include <conio.h>
#define n 10

int llenar(int v[10]);
void imprimir(int v[10]);
void qs(int lista[10],int limite_izq,int limite_der);
void quicksort(int lista[]);

int main(void)
	{
     int lista[10] ={0};
	  int size = sizeof(lista)/sizeof(int);
        imprimir(lista);
        getch();
       llenar(lista);
 	    printf("Lista Desordenada \n");
 	  imprimir(lista);

      printf("\n");
      quicksort(lista);
       imprimir(lista);

        getch();
	    return 0;
	}



int llenar(int v[10])
{
	for(int i=0;i<n;i++) //llenado
	{
		printf( "\nX[%i] = ",i);
		scanf("%d",&v[i]);
   }
	return v[10];
}

void imprimir(int v[10])
{
	for(int i=0;i<n;i++) //impresion
	{
		printf("X[%i]=%d\n",i,v[i]);
	}
}


void qs(int lista[],int limite_izq,int limite_der)
	{
	    int izq,der,temporal,pivote;

	    izq=limite_izq;
	    der = limite_der;
	    pivote = lista[(izq+der)/2];

	    do{
	        while(lista[izq]<pivote && izq<limite_der)izq++;
	        while(pivote<lista[der] && der > limite_izq)der--;
	        if(izq <=der)
	        {
	            temporal= lista[izq];
	            lista[izq]=lista[der];
            lista[der]=temporal;
	            izq++;
	            der--;

	        }

	    }while(izq<=der);
	    if(limite_izq<der){qs(lista,limite_izq,der);}
	    if(limite_der>izq){qs(lista,izq,limite_der);}

	}

	void quicksort(int lista[10])
	{  //int n=10;
	    qs(lista,0,n-1);
	}
