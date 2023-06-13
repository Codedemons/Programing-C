#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>
#define max 10

typedef struct cola
{
	int cola[max], frente, fin;
} tipoC;

int estaLlena(tipoC c)
{
	if (c.fin == max-1) return 1;
	else return 0;
}

//*************************************************************************
tipoC encolar(tipoC c, int elem)
{
	if (estaLlena(c))
	printf("\n No hay sillas disponibles, no seas gloton como Angel \n");
    else 
	{
    c.fin=c.fin+1;
    c.cola[c.fin]=elem;
    if(c.frente==-1) c.frente=0;
   	}
   return c;
}

int estaVacia(tipoC c)
{
	if (c.frente == -1 || c.frente>c.fin) return 1;
   	else return 0;
}

//*************************************************************************
tipoC desencolar(tipoC c, int *elem)
{
*elem = -1;
if (estaVacia(c))
printf("Sillas disponibles \n");
else
	{
	*elem = c.cola[c.frente];
	c.frente=c.frente+1;
	}
   return c;
}


//*************************************************************************
void muestra(tipoC c)
{
int i;
printf("\Lista de los glotones: \n");
    
for (i=c.frente; i<=c.fin; i++)
printf("\n Gloton numero: -> %d  \n",c.cola[i]);
}

int main()
{
tipoC c;
int opcion, elem=1;
system("color 0A");
c.frente=c.fin=-1;
do
{
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t \t Comedor \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 1.-Apertura \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2.-Cierre \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingresa una opcion: ");
	scanf("%d", &opcion);
	system("cls");

	switch(opcion)
	{
		case 1:
		{
		int e=0;
		srand(time(NULL));
		printf("\n Maximo: 10 glotones \n\n");
		for(e=0; e<10; e++)
			{
			printf("\r%i",elem=1+rand()%(100+1-1));
			Sleep(1000);
			c = encolar(c, elem);
    		}
    	system("cls");
		muestra (c);
		break;
		}

		break;
		case 2:
		{
		int E=0;
		for(E=0; E<10; E++)
	{
	c = desencolar(c, &elem);
	if(elem != -1) 
	printf("\n Adios gloton numero ->: %d \n",elem);
	Sleep(1000);
	}
	printf("\n Sin glotones \n");
		}			
		break;
		case 3: printf("\n Gracias por entrar al sistema de comedor...Adios...Paseme profe \n"); break;
		default: printf("\n Gracias por entrar al sistema de comedor...Adios...Paseme profe \n");
	}	
}
while(opcion!= 3);
getch();
}
