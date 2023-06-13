#include <stdio.h>
#include <conio.h>

int main(void)

{
	float Lado1, Lado2, Altura, Base, Area, DiagonalMayor, DiagonalMenor, BaseMayor, BaseMenor, Perimetro, Apotema, Radio, Pi=3.1416;
	int  Opcion;
	
	printf("Menu de Areas\n");
	printf("1.- Cuadrado\n");
	printf("2.- Rectangulo\n");
	printf("3.- Circulo\n");
	printf("4.- Triangulo\n");
	printf("5.- Rombo\n");
	printf("6.- Romboide\n");
	
	
	printf("Opcion:");
	scanf("%d",&Opcion);
	
	if(Opcion==1)
		{
		printf("Elegiste el Cuadrado");
		
		
		printf("Proporciona el valor de un lado");
		scanf("%f",&Lado1);
		
		Area=Lado1*Lado1;
		
		
		printf("El area del Cuadrado es:%f",Area);
		
		
		getch();
		}
		else
		
		if(Opcion==2)
		{
		printf("Elegiste Rectangulo");
		
		
		printf("Proporciona el valor de la base");
		scanf("%f",&Base);
		
		printf("Proporciona el valor de la Altura");
		scanf("%f",&Altura);
			
		
		Area=Base*Altura;
	
		
		printf("El area del Rectangulo es:%f",Area);
	
		
		getch();
		}
		else
			if(Opcion==3)
			{
			printf("Elegiste el Circulo");
		
			
			printf("Proporciona el valor del Radio");
			scanf("%f",&Radio);
		
		
			Area=Pi*(Radio*Radio);
		
		
			printf("El area del Circulo es:%f",Area);
		
		
			getch();
			}
			else
				if(Opcion==4)
				{
				printf("Elegiste el Triangulo");
			
				
				printf("Proporciona el valor de la Base");
				scanf("%f",&Base);
		
		
				printf("Proporciona el valor de la Altura");
				scanf("%f",&Altura);
				
				
				Area=(Base*Altura)/2;
		
		
				printf("El area del Triangulo es:%f",Area);
		
		
				getch();
				}
				else
					if(Opcion==5)
					{
					printf("Elegiste Rombo");
		
			
					printf("Proporciona el valor de la Diagonal Mayor");
					scanf("%f",&DiagonalMayor);
					
					printf("Proporciona el valor de la Diagonal Menor");
					scanf("%f",&DiagonalMenor);
		
		
					Area=(DiagonalMayor*DiagonalMenor)/2;
					
					
					printf("El area del Rombo es:%f",Area);
		
		
					getch();
					}
					else
						if(Opcion==6)
						{
						printf("Elegiste Romboide");
				
			
						printf("Proporciona el valor de la Base");
						scanf("%f",&Base);
					
						printf("Proporciona el valor de la Altura");
						scanf("%f",&Altura);
		
		
						Area=Base*Altura;
					
					
						printf("El area del Romboide es:%f",Area);
		
		
						getch();
						}
						else
							printf("Esa opcion no existe");
							
							
	return 0;
						
}
