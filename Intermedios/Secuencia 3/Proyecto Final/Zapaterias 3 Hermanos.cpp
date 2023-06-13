#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#define n 5

void alta(void);
void imprimir(void);
void consultar(void);
void modificar(void);
void baja(void);
void burbuja(void);
void busqueda_binaria(void);
void menu(void);
															
struct zapateria
{
	int modelo;
	char marca[25];
	char color[25];
	char talla[25];
	char existencia[20];
	int costo;
	int cantidad;
}zapaterias[n],temp[1];

	int i, x, y;
	char marca2[25];
	char borrar[ ]={" "};
	char buscar;
	
	FILE *archivo;
	
int main(void)
{
	int opcion;
	system("color 47");
	do
	{
	menu();
	scanf("%d",&opcion);
	
	switch(opcion)
		{
		case 1: alta(); getch(); break;	
		case 2: imprimir(); getch(); break;			
		case 3: consultar(); getch(); break;
		case 4: modificar(); getch(); break;
		case 5: baja(); getch(); break;
		case 6: burbuja(); getch(); break;
		case 7: busqueda_binaria(); getch(); break;
		default: printf("\n \n \t \t \t \t \t \t \t \t \t Gracias por entrar al sistema 3 Hermanos...\n \n \t \t \t \t \t \t \t \t \t Adios");
		getch();
		}
	system("cls");
	
	}
	while(opcion!=8);
	
getch();
}	

void menu(void)
{
	printf("\n \n");
	printf("\t \t \t \t \t \t########    ###    ########     ###    ######## ######## ########  ####    ###    \n");
	printf("\t \t \t \t \t \t     ##    ## ##   ##     ##   ## ##      ##    ##       ##     ##  ##    ## ##   \n");
	printf("\t \t \t \t \t \t    ##    ##   ##  ##     ##  ##   ##     ##    ##       ##     ##  ##   ##   ##  \n");
	printf("\t \t \t \t \t \t   ##    ##     ## ########  ##     ##    ##    ######   ########   ##  ##     ## \n");
	printf("\t \t \t \t \t \t  ##     ######### ##        #########    ##    ##       ##   ##    ##  ######### \n");
	printf("\t \t \t \t \t \t ##      ##     ## ##        ##     ##    ##    ##       ##    ##   ##  ##     ## \n");
	printf("\t \t \t \t \t \t######## ##     ## ##        ##     ##    ##    ######## ##     ## #### ##     ## \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t \t #######  \n");
	printf("\t \t \t \t \t \t \t \t \t \t##     ## \n");
	printf("\t \t \t \t \t \t \t \t \t \t       ## \n");
	printf("\t \t \t \t \t \t \t \t \t \t #######  \n");
	printf("\t \t \t \t \t \t \t \t \t \t      ## \n");
	printf("\t \t \t \t \t \t \t \t \t \t##     ## \n");
	printf("\t \t \t \t \t \t \t \t \t \t #######  \n");
	printf("\n \n");
	printf("\t \t \t \t \t \t##     ## ######## ########  ##     ##    ###    ##    ##  #######   ######  \n");
	printf("\t \t \t \t \t \t##     ## ##       ##     ## ###   ###   ## ##   ###   ## ##     ## ##    ## \n");
	printf("\t \t \t \t \t \t##     ## ##       ##     ## #### ####  ##   ##  ####  ## ##     ## ##       \n");
	printf("\t \t \t \t \t \t######### ######   ########  ## ### ## ##     ## ## ## ## ##     ##  ######  \n");
	printf("\t \t \t \t \t \t##     ## ##       ##   ##   ##     ## ######### ##  #### ##     ##       ## \n");
	printf("\t \t \t \t \t \t##     ## ##       ##    ##  ##     ## ##     ## ##   ### ##     ## ##    ## \n");
	printf("\t \t \t \t \t \t##     ## ######## ##     ## ##     ## ##     ## ##    ##  #######   ######  \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 1-Alta \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2-Imprimir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");		
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 3-Buscar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 4-Modificar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 5-Baja \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 6-Burbuja \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 7-Busqueda Binaria \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 8-Salir \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Ingresa una opcion: ");
}

void alta(void)
{
	archivo=fopen("C:\\prueba\\zapateria.bin","wb");
	for(i=0;i<n;i++)
	{
		printf("Modelo: ");
		scanf("%d",&zapaterias[i].modelo);
		getchar();
		printf("Marca: ");
		gets(zapaterias[i].marca);
		printf("Color: ");
		gets(zapaterias[i].color);
		printf("Talla: ");
		gets(zapaterias[i].talla);
		printf("Existencia: ");
		gets(zapaterias[i].existencia);
		printf("Costo: ");
		scanf("%d",&zapaterias[i].costo);
		printf("Cantidad: ");
		scanf("%d",&zapaterias[i].cantidad);
		fwrite(&zapaterias[i],sizeof(struct zapateria),1,archivo);	
	}		
		fclose(archivo);
}
	
void imprimir(void)
{	
	archivo=fopen("C:\\prueba\\zapateria.bin","rb");
	for(i=0;i<n;i++)
	{
		fread(&zapaterias[i],sizeof(struct zapateria),1,archivo);	
		printf("Modelo: %d\n",zapaterias[i].modelo);
		printf("Marca: %s\n",zapaterias[i].marca);
		printf("Color: %s\n",zapaterias[i].color);
		printf("Talla: %s\n",zapaterias[i].talla);
		printf("Existencia: %s\n",zapaterias[i].existencia);
		printf("Costo: %d\n",zapaterias[i].costo);
		printf("Cantidad: %d\n",zapaterias[i].cantidad);               
		getch();
		getchar();
	}
	fclose(archivo);	
}

void consultar(void)
{
	archivo=fopen("C:\\prueba\\zapateria.bin","rb");
	int j;
	printf("Marca: ");
	getchar();
	gets(marca2);
	for(i=0;i<n;i++)
	{
		fread(&zapaterias[i],sizeof(struct zapateria),1,archivo);
		j=strcmp(marca2,zapaterias[i].marca);
		if(j==0)
		{
			printf("Marca: ");
			puts(zapaterias[i].marca);
			printf("Modelo: %d \n",zapaterias[i].modelo);
			printf("Color: ");
			puts(zapaterias[i].color);
			printf("Talla: ");
			puts(zapaterias[i].talla);
			printf("Existencia: ");
			puts(zapaterias[i].existencia);
			printf("Costo: %d \n",zapaterias[i].costo);
			printf("Cantidad: %d \n",zapaterias[i].cantidad);
		}		
	}
			fclose(archivo);
}
	
void modificar(void)
{	
	archivo=fopen("C:\\prueba\\zapateria.bin","rb");
	fread(&zapaterias[i],sizeof(struct zapateria),1,archivo);

	int j, opcion_m;
	printf("Marca: ");
	getchar();
	gets(marca2);

	for(i=0;i<n;i++)
		{
			j=strcmp(marca2,zapaterias[i].marca);
			if(j==0)
			{
				printf("1-Modelo \n");
				printf("2-Marca \n");
				printf("3-Color \n");
				printf("4-Talla \n");
				printf("5-Existencia \n");
				printf("6-Costo \n");
				printf("7-Cantidad \n");
				printf("Opcion: ");
				scanf(" %d",&opcion_m);
				
			archivo=fopen("C:\\prueba\\zapateria.bin","wb");
			switch(opcion_m)
			{
			case 1: 
				{
				printf("Modelo: ");
				scanf("%d",&zapaterias[i].modelo);
				}; 
				getch(); 
				break;	
	
			case 2: 
				{
				printf("Marca: ");
				getchar();
				gets(zapaterias[i].marca);
				}; 
				getch(); 
				break;	
	
			case 3: 
				{
				printf("Color: ");
				getchar();
				gets(zapaterias[i].color);
				}; 
				getch(); 
				break;	
		
			case 4: 
				{
				printf("Talla: ");
				getchar();
				gets(zapaterias[i].talla);
				}; 
				getch(); 
				break;	
	
			case 5: 
				{
				printf("Existencia: ");
				getchar();
				gets(zapaterias[i].existencia);
				}; 
				getch(); 
				break;	
	
			case 6: 
				{
				printf("Costo: ");
				scanf("%d",&zapaterias[i].costo);
				}; 
				getch(); 
				break;	
			
			case 7: 
				{
				printf("Cantidad: ");
				scanf("%d",&zapaterias[i].cantidad);
				}; 
				getch(); 
				break;	

				printf("No valido");
				getch();
			}	
		}
		fwrite(&zapaterias[i],sizeof(struct zapateria),1,archivo);	
	}		
		fclose(archivo);
}
	
void baja(void)
{
	archivo=fopen("C:\\prueba\\zapateria.bin","rb");
	fread(&zapaterias[i],sizeof(struct zapateria),1,archivo);
	int j;
	
	printf("Marca: ");
	getchar();
	gets(marca2);

	for(i=0;i<n;i++)
	{
		j=strcmp(marca2,zapaterias[i].marca);
		if(j==0)
		{
			archivo=fopen("C:\\prueba\\zapateria.bin","wb");
			zapaterias[i].modelo=0;
			strcpy(zapaterias[i].marca, borrar);
			strcpy(zapaterias[i].color, borrar);
			strcpy(zapaterias[i].talla, borrar);
			strcpy(zapaterias[i].existencia, borrar);
			zapaterias[i].costo=0;		
			zapaterias[i].cantidad=0;	
		}
			fwrite(&zapaterias[i],sizeof(struct zapateria),1,archivo);
	}
			fclose(archivo);
}

void burbuja (void)
{
archivo=fopen("C:\\prueba\\zapateria.bin","rb");
for (i=0;i<n;i++)
	{
    	fread(&zapaterias[i],sizeof(struct zapateria),1,archivo);
	}
	fclose(archivo);

   for (int x=0;x<n;x++)
	{
   for (int y=0;y<n;y++)
    {
    if(zapaterias[x].modelo<zapaterias[y].modelo)
    {
    temp[0].modelo=zapaterias[x].modelo;
    strcpy(temp[0].marca,zapaterias[x].marca);
    strcpy(temp[0].color,zapaterias[x].color);
    strcpy(temp[0].talla,zapaterias[x].talla);
    strcpy(temp[0].existencia,zapaterias[x].existencia);
    temp[0].costo=zapaterias[x].costo;
    temp[0].cantidad=zapaterias[x].cantidad;
     
    zapaterias[x].modelo=zapaterias[y].modelo;
    strcpy(zapaterias[x].marca,zapaterias[y].marca);
    strcpy(zapaterias[x].color,zapaterias[y].color);
    strcpy(zapaterias[x].talla,zapaterias[y].talla);
    strcpy(zapaterias[x].existencia,zapaterias[y].existencia);
    zapaterias[x].costo=zapaterias[y].costo;
    zapaterias[x].cantidad=zapaterias[y].cantidad;
 	
    zapaterias[y].modelo=temp[0].modelo;
    strcpy(zapaterias[y].marca,temp[0].marca);
    strcpy(zapaterias[y].color,temp[0].color);
    strcpy(zapaterias[y].talla,temp[0].talla);
    strcpy(zapaterias[y].existencia,temp[0].existencia);
    zapaterias[y].costo=temp[0].costo;
    zapaterias[y].cantidad=temp[0].cantidad;
    }
    }
	}
    archivo=fopen("C:\\prueba\\zapateria.bin","wb");
    for (int i=0;i<n;i++)
    {
    fwrite(&zapaterias[i],sizeof(struct zapateria),1,archivo);	
    }
    
	 fclose(archivo);
}

void busqueda_binaria(void)
{
	archivo=fopen("C:\\prueba\\producto.bin","rb");

	printf("Modelo:");				
	scanf("%d",&buscar);
	int inferior=0, superior=n+1, mitad;
	while (inferior<=superior) 
		{
			fread(&zapaterias[i],sizeof(struct zapateria),1,archivo);
		{
		mitad=(inferior+superior)/2; 
		if (zapaterias[mitad].modelo==buscar)
		{
		printf("Modelo: %d\n",zapaterias[mitad].modelo);
		printf("Marca: %s\n",zapaterias[mitad].marca);
		printf("Color: %s\n",zapaterias[mitad].color);
		printf("Talla: %s\n",zapaterias[mitad].talla);
		printf("Existencia: %s\n",zapaterias[mitad].existencia);
		printf("Costo: %d\n",zapaterias[mitad].costo);
		printf("Cantidad: %d\n",zapaterias[mitad].cantidad);
		break; 
		}
			if (zapaterias[mitad].modelo>buscar) 
			{	superior=mitad; 
				mitad=(inferior+superior)/2; 
			}
			if (zapaterias[mitad].modelo<buscar) 
			{
			inferior=mitad; 
				mitad=(inferior+superior)/2;
			}
		}	
		fclose(archivo);
	}
}


