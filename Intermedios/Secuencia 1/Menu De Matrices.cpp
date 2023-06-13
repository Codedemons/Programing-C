#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

void menu(void);
void nula(void);
void identidad(void);
void escalar(void);
void diagonal (void);
void superior (void);
void inferior (void);
void transpuesto (void);
	
int main(void)
{
	int opcion;
	setlocale(LC_ALL,"");
	do
	{
	menu();
	scanf("%d",&opcion);
	system("cls");
	
	switch(opcion)
	{
		case 1: nula(); system("cls"); break;
		case 2: identidad(); system("cls"); break;
		case 3: escalar(); system("cls"); break;
		case 4: diagonal(); system("cls"); break;
		case 5: superior(); system("cls"); break;
		case 6: inferior(); system("cls"); break;
		case 7: transpuesto(); system ("cls"); break;
		default: 	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t Opcion Invalida \n \n \t \t \t \t \t \t \t \t \t Adios...Hecho por Cristian Alonso Ramayo Barrera, NO ROBAR EL ARCHIVO \n \n \t \t \t \t \t \t \t \t \t Paseme profe :´v"); getch();

	}
	}while(opcion!=8);
	system("cls");
}

	void menu(void)
	{
	system("color 0A");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t MENUS DE MATRICES \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 1-Matriz Nula \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 2-Matriz Identidad \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 3-Matriz Escalar \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 4-Matriz Diagonal \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 5-Matriz Triangulo Superior \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");	
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 6-Matriz Triangulo Inferior \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");
	printf("\n \n");
	printf("\t \t \t \t \t \t \t \t \t 7-Matriz Transpuesta \n");
	printf("\t \t \t \t \t \t \t \t    ----------------------------");

	printf("\n \n");
	}
	
void nula(void)
{
	system("cls");
 	int matriz[3][3]={0};	
 	int f, c;
 	system("color 17");
 
	for(f=0; f<3; f++)	
	{
	
	for(c=0; c<3; c++)		
	{

	printf("%i",matriz[f][c]);

	matriz[f][c]=1;

	}
	printf("\n");

	}
	getch();	
}

void identidad(void)
{
	system("cls");
	int f, c; 
	int i=0;
	int matriz[3][3]={0};
	system("color 47");		

	for(f=0; f<3; f++)
	{
	for(c=0; c<3; c++)
	{
	
	if(i>3)
	{i=0;}
	
	if(i==0)
	{matriz[f][c]=1;}
	
		i++;	
	}
	
	}

	for(f=0; f<3; f++)	
	{	
		
	for(c=0; c<3; c++)		
	{

	printf("%i",matriz[f][c]);

	}
	printf("\n");

	}
	getch();
}
void escalar(void)
{
	system("cls");
 	int matriz[3][3]={0};	
 	int f, c, valor;
 	system("color 17");

	do
	{
	printf("\t \t \t \t \t \t \t \t \t Da valor: ");
	scanf("%d", &valor)	;
	}
	while(valor==0 || valor==1);
 
	for(f=0; f<3; f++)	
	{
	
	for(c=0; c<3; c++)		
	{
		if(f==c)
		matriz[f][c]=valor;
	}
	}
	for(f=0; f<3; f++)	
	{	
	
	for(c=0; c<3; c++)		
	{

	printf("%i",matriz[f][c]);

	}
	printf("\n");
		}
	getch();
}

void diagonal(void)
{
	system("cls");
	int datos[3][3]={0};
	int f,c,valor,numero;
	system("color 47");
	
	for (f=0; f<3; f++)
	{
	for (c=0; c<3; c++)
	{		
	if(f==c && f==0){
	printf("\n \t \t \t \t \t \t \t \t \t  Da valor: ");
	scanf("%d",&valor);
	datos[f][c]=valor;
					}   
	   else
	if(f==c && f==1){
	printf("\n \t \t \t \t \t \t \t \t \t  Da valor: ");
	scanf("%d",&valor);
	datos[f][c]=valor;
    				  }
      else 
    if(f==c && f==2){
	printf("\n \t \t \t \t \t \t \t \t \t  Da valor: ");
	scanf("%d",&valor);
	datos[f][c]=valor;
					}
}
}
		for (f=0; f<3; f++)
		{
			for (c=0; c<3; c++)
			{
			printf("\t%d",datos[f][c]);
			}
		printf("\n");
		}
	getch();	
}

void superior(void)
{
	system("cls");
	int datos[3][3];
	int valor;
	int f,c;
	system("color 17");
	for (f=0; f<3; f++)
		for (c=0; c<3; c++)
		
	if(f>c)
	{
			datos[f][c]=0;
				}else{
	printf("\t \t \t \t \t \t \t \t \t Da valor: ");
	scanf("%d",&valor);
  		datos[f][c]=valor;
  		
 	 }
	
	
		for (f=0; f<3; f++)
		{
		for (c=0; c<3; c++)
		{
			printf("%d",datos[f][c]);
			printf("\t");
		}
		printf("\n");
	}
	getch();	
}

void inferior(void)
{
	system("cls");
	int datos[3][3];
	int valor;
	int f,c;
	system("color 47");
	for (f=0; f<3; f++)
		for (c=0; c<3; c++)
		
	if(f<c)
	{
			datos[f][c]=0;
				}else{
	printf("\t \t \t \t \t \t \t \t \t Da valor: ");
	scanf("%d",&valor);
  		datos[f][c]=valor;
  		
 	 }
	
	
		for (f=0; f<3; f++)
		{
		for (c=0; c<3; c++)
		{
			printf("%d",datos[f][c]);
			printf("\t");
		}
		printf("\n");
	}
			
	getch();	
}
	
	void transpuesto (void)
{
	int mat[3][3],c=0,f=0;
	system("cls");
	system("color 17");
	
	for(f=0;f<3;f++)
	for(c=0;c<3;c++)
	{
		printf("\t \t \t \t \t \t \t \t \t Da valor: ");
		scanf("%d", & mat[f][c]);
	}
	printf("\t \t \t \t \t \t \t \t \t Matriz original");
	printf("\n \n");
		for(f=0;f<3;f++)
		{
			printf("\n \t \t");
				for(c=0;c<3;c++)
				{
					printf("%d", mat[f][c]);
				}
		}
		printf("\t \t \t \t \t \t \t \t \t Matriz transpuesta");
		printf("\n \n");
		for(f=0;f<3;f++)
		{
			printf("\n \t \t");
				for(c=0;c<3;c++)
				{
					printf("%d", mat[c][f]);
				}
		}
		printf("\n\n\n");
		
	getch();	
}


