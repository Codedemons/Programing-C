#include <stdio.h>
#include <conio.h>

int main (void)

{ 
int Mes;

printf("Da un numero del 1 al 12");
scanf("%d",&Mes);

switch(Mes)
	{case 1: printf("Enero"); break;
	case 2: printf("Febrero"); break;
	case 3: printf("Marzo"); break;
	case 4: printf("Abril"); break;
	case 5: printf("Mayo"); break;
	case 6: printf("Junio"); break;
	case 7: printf("Julio"); break;
	case 8: printf("Agosto"); break;
	case 9: printf("Septiembre"); break;
	case 10: printf("Octubre"); break;
	case 11: printf("Noviembre"); break;
	case 12: printf("Diciembre"); break;
	default: printf("No es un  "Mes);
	};
	
	getch();
}
