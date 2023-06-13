#include <stdio.h>
#include <conio.h>

int main (void)
{
	int calificacion1, calificacion2, calificacion3, promedio;
	
 printf("\n Dame la primera calificacion: ");
 scanf("%d",&calificacion1);
 
 printf("\n Dame la segunda calificacion: ");
 scanf("%d",&calificacion2);
 
 printf("\n Dame la tercera calificacion: ");
 scanf("%d",&calificacion3);
  
promedio=(calificacion1+calificacion2+calificacion3)/3;

printf("\n El promedio es de: %d", promedio);

getch ();

}
