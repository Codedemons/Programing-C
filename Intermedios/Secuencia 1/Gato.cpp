#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (void)
{//inicio principal
	char mat[3][3]={'1','2','3','4','5','6','7','8','9'}, player, posicion;
	int f,c,gano=0;
	
	system ("color 47");
	printf("\n\n\n\n\t\t\t\t\tEL JUEGO DEL GATO XD");
	printf("\n\n\n\n\n\t\t\t\t\t-------------");	
	printf("\n\t\t\t\t\t");										 // IMPRESION		
	for(f=0;f<3;f++)
	{//inicio for
		for(c=0;c<3;c++)
			{//inicio for
				printf("| %c puto ",mat[f][c]);
			}//fin for
	printf("| ");
	printf("\n\t\t\t\t\t-------------");
	printf("\n\t\t\t\t\t");
	}//fin for
	
	do{															// QUIEN EMPIEZA
		printf("\n\t\t\t\t\tQuien inica el juego: ");
		scanf(" %c",&player);
		if(player=='x')
			printf("\t\t\t\t\tEmpieza jugador %c ", player);
		else
			if(player=='o')
				printf("\t\t\t\t\tEmpieza jugador %c", player);
			else
			printf("\t\t\t\t\tNo valido");
	
	}while(player!='x' && player!='o');

																 // TURNOS	
	do{
			
			do{
			

			printf("\n\t\t\t\t\tEs turno de %c \n",player);									
			printf("\t\t\t\t\tIngresa la posicion para poner %c: ",player);
			scanf(" %c",&posicion);
			switch(posicion)
			{//inicio switch
			case '1': mat[0][0]= player; break;
			case '2': mat[0][1]= player; break;
			case '3': mat[0][2]= player; break;
			case '4': mat[1][0]= player; break;
			case '5': mat[1][1]= player; break;
			case '6': mat[1][2]= player; break;
			case '7': mat[2][0]= player; break;
			case '8': mat[2][1]= player; break;
			case '9': mat[2][2]= player; break;
			default: printf("\t\t\t\t\tNo valido");
			};//fin switch
	system ("cls");
	printf("\n\n\n\n\n\t\t\t\t\t-------------");	
	printf("\n\t\t\t\t\t");										 // IMPRESION		
	for(f=0;f<3;f++)
	{//inicio for
		for(c=0;c<3;c++)
			{//inicio for
				printf("| %c ",mat[f][c]);
			}//fin for
	printf("| ");
	printf("\n\t\t\t\t\t-------------");
	printf("\n\t\t\t\t\t");
	}//fin for	
		
			if((mat[0][0]=='x' && mat[0][1]=='x' && mat[0][2]=='x') || (mat[1][0]=='x' && mat[1][1]=='x' && mat[1][2]=='x') ||
				(mat[2][0]=='x' && mat[2][1]=='x' && mat[2][2]=='x') || (mat[0][0]=='x' && mat[1][0]=='x' && mat[2][0]=='x') ||
				(mat[0][1]=='x' && mat[1][1]=='x' && mat[2][1]=='x') || (mat[0][2]=='x' && mat[1][2]=='x' && mat[2][2]=='x') ||
				(mat[0][0]=='x' && mat[1][1]=='x' && mat[2][2]=='x') ||	(mat[0][2]=='x' && mat[1][1]=='x' && mat[2][0]=='x'))
				{
				gano=1;
				printf("GATO!!");
				}
			else
				if((mat[0][0]=='o' && mat[0][1]=='o' && mat[0][2]=='o') || (mat[1][0]=='o' && mat[1][1]=='o' && mat[1][2]=='o') ||
					(mat[2][0]=='o' && mat[2][1]=='o' && mat[2][2]=='o') || (mat[0][0]=='o' && mat[1][0]=='o' && mat[2][0]=='o') ||
					(mat[0][1]=='o' && mat[1][1]=='o' && mat[2][1]=='o') || (mat[0][2]=='o' && mat[1][2]=='o' && mat[2][2]=='o') ||
					(mat[0][0]=='o' && mat[1][1]=='o' && mat[2][2]=='o') ||	(mat[0][2]=='o' && mat[1][1]=='o' && mat[2][0]=='o'))
					{
					gano=1;
					printf("GATO!!");
					}
			else	
		
		
		
		
		if(player=='x')											// CAMBIO DE TURNO
			player='o';
		else
		{
			if(player=='o')
				player='x';
		}
	
			do{
			printf("\n\t\t\t\t\tEs turno de %c \n",player);
			printf("\t\t\t\t\tIngresa la posicion para poner %c: ",player);
			scanf(" %c",&posicion);
			switch(posicion)
			{//inicio switch
			case '1': mat[0][0]= player; break;
			case '2': mat[0][1]= player; break;
			case '3': mat[0][2]= player; break;
			case '4': mat[1][0]= player; break;
			case '5': mat[1][1]= player; break;
			case '6': mat[1][2]= player; break;
			case '7': mat[2][0]= player; break;
			case '8': mat[2][1]= player; break;
			case '9': mat[2][2]= player; break;
			default: printf(" No valido");
			
			};//fin switch
	system ("cls");
	printf("\n\n\n\n\n\t\t\t\t\t-------------");	
	printf("\n\t\t\t\t\t");										 // IMPRESION		
	for(f=0;f<3;f++)
	{//inicio for
		for(c=0;c<3;c++)
			{//inicio for
				printf("| %c ",mat[f][c]);
			}//fin for
	printf("| ");
	printf("\n\t\t\t\t\t-------------");
	printf("\n\t\t\t\t\t");
	}//fin for
	
			if((mat[0][0]=='x' && mat[0][1]=='x' && mat[0][2]=='x') || (mat[1][0]=='x' && mat[1][1]=='x' && mat[1][2]=='x') ||
				(mat[2][0]=='x' && mat[2][1]=='x' && mat[2][2]=='x') || (mat[0][0]=='x' && mat[1][0]=='x' && mat[2][0]=='x') ||
				(mat[0][1]=='x' && mat[1][1]=='x' && mat[2][1]=='x') || (mat[0][2]=='x' && mat[1][2]=='x' && mat[2][2]=='x') ||
				(mat[0][0]=='x' && mat[1][1]=='x' && mat[2][2]=='x') ||	(mat[0][2]=='x' && mat[1][1]=='x' && mat[2][0]=='x'))
				{
				gano=1;
				printf("GATO!!");
				}
			else
				if((mat[0][0]=='o' && mat[0][1]=='o' && mat[0][2]=='o') || (mat[1][0]=='o' && mat[1][1]=='o' && mat[1][2]=='o') ||
					(mat[2][0]=='o' && mat[2][1]=='o' && mat[2][2]=='o') || (mat[0][0]=='o' && mat[1][0]=='o' && mat[2][0]=='o') ||
					(mat[0][1]=='o' && mat[1][1]=='o' && mat[2][1]=='o') || (mat[0][2]=='o' && mat[1][2]=='o' && mat[2][2]=='o') ||
					(mat[0][0]=='o' && mat[1][1]=='o' && mat[2][2]=='o') ||	(mat[0][2]=='o' && mat[1][1]=='o' && mat[2][0]=='o'))
					{
					gano=1;
					printf("GATO!!");
					}	
				else
	
	
	
		if(player=='x')											// CAMBIO DE TURNO
			player='o';
		else
		{
			if(player=='o')
				player='x';
		}
			}while(posicion<1 || posicion>9 && gano==0);
			
			
		}while(posicion<1 || posicion>9 && gano==0);

	

}while(gano==0);
	
		printf("\n\n \t\t\t\t\t Gano el jugador %c", player);
			
getch();
}//fin principal
