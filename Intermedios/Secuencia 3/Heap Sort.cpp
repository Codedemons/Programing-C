#include <stdio.h>
#include <conio.h>
#define n 10

int makeheap ( int v[10]) ;
int heapsort ( int v[10]) ;
int llenar(int v[10]);
void imprimir (int v[10]);

int main( )
{
    int x[10] = {0} ;
    printf ("----------------Algoritmo Heap Sort------------------------\n" ) ;
    printf ("\nAntes de llenar\n" ) ;
    imprimir(x);
    printf ("\nLLenado del vector\n" ) ;
    x[10]=llenar(x);
    printf ( "\nAntes de ordenar\n" ) ;
    imprimir(x) ;
    x[10]=makeheap(x);
    x[10]=heapsort(x);
    printf ( "\nDespues de ordenar:\n" ) ;
    imprimir(x);
    getch( );
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





int makeheap ( int x[10])    // genera el monticulo o arbol
{
    int i, val, s, f ;
    for ( i = 1 ; i < n ; i++ )
    {
        val = x[i] ;
        s = i ;
        f = ( s - 1 ) / 2 ;
        while ( s > 0 && x[f] < val )
        {
            x[s] = x[f] ;
            s = f ;
            f = ( s - 1 ) / 2 ;
        }
        x[s] = val ;
    }
    return x[10];
}

int heapsort ( int x[10])
{
    int i, s, f, ivalue ;
    for ( i = n - 1 ; i > 0 ; i-- )
    {
        ivalue = x[i] ;
        x[i] = x[0] ;
        f = 0 ;

        if ( i == 1 )
            s = -1 ;
        else
            s = 1 ;

        if ( i > 2 && x[2] > x[1] )
            s = 2 ;

        while ( s >= 0 && ivalue < x[s] )
        {
            x[f] = x[s] ;
            f = s ;
            s = 2 * f + 1 ;

            if ( s + 1 <= i - 1 && x[s] < x[s + 1] )
                s++ ;
            if ( s > i - 1 )
                s = -1 ;
        }
        x[f] = ivalue ;
    }
   return x[10];
}
