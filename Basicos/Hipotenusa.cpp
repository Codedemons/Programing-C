#include<math.h>
#include<stdio.h>
#include<conio.h>
int main (void)
{
	float cateto_opuesto, cateto_adyacente, hipotenusa, raiz;
	
	printf("Ingrese el cateto opuesto: ");
	scanf("%f",&cateto_opuesto);
	
	printf("Ingrese el cateto adyacente: ");
	scanf("%f",&cateto_adyacente);
	
	hipotenusa=((cateto_opuesto)*(cateto_opuesto))+((cateto_adyacente)*(cateto_adyacente));
	
	raiz=sqrt(hipotenusa);
	
	printf("La hipotenusa es igual a:%f",raiz);
	
	getch();
}
