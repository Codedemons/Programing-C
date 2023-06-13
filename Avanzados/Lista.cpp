#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct lista
{
	int clave;
	struct lista *siguiente;
};
	
int main (void)
{
	system("color 17");
	int i;
	int c=5;
	int valor;
	struct lista *auxiliar;
	struct lista *nuevo;
	struct lista *inicio;
		
	nuevo= NULL;
	inicio= NULL;
		
	for(i=0; i<c; i++)
	{
	nuevo=(struct lista *) malloc (sizeof(struct lista));
		
	printf("\n Ingrese dato: ");
	scanf("%d",&nuevo->clave);
		
	nuevo->siguiente=inicio;
	inicio=nuevo;
	}
	auxiliar=inicio;
	
	//Imprimir//
	for(i=0; i<5; i++)
	{
             printf("\n %d",auxiliar->clave);
             auxiliar=auxiliar->siguiente;
    }
    
    //buscar//
	printf("\n Ingresa dato a buscar: ");
	scanf("%d",&valor);
	
	auxiliar=inicio;
	
	for(i=0; i<5; i++)
	{
             if(valor==auxiliar->clave)
                 printf("\n Si se encuentra");
                 else
                 printf("\n No se encuentra");
             auxiliar=auxiliar->siguiente;
    }
    
    //modificacion//
	printf("\n Ingresa dato a modificar: ");
	scanf("%d",&valor);
		
	auxiliar=inicio;
	
	for(int i=0; i<5; i++)
	{
		if(valor==auxiliar->clave)
		{
			printf("\n Ingresa nuevo dato:");
			scanf("%d",& auxiliar->clave);
		}
		auxiliar=auxiliar->siguiente; 
	}
    auxiliar=inicio;
    
    for(int i=0; i<5; i++)
    {
    	printf("\n %d",auxiliar->clave);
    	auxiliar=auxiliar->siguiente; 
	}
    
    //eliminar//
	printf("\n Ingresa dato a eliminar:");
	scanf("%d",&valor);
		
	auxiliar=inicio; 
		
	for(int i=0; i<5; i++)
		{
	 	if(valor==auxiliar->clave)
	 		{
		 		auxiliar->clave=0;	
			}
		auxiliar=auxiliar->siguiente;
		}
		auxiliar=inicio;
        for( i=0; i<5; i++)
        {
    	printf("\n %d",auxiliar->clave);
    	auxiliar=auxiliar->siguiente; 
     	}
	getch();
}

