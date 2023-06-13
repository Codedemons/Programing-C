#include<stdio.h>
#include<conio.h>


int main(void)

{
char nombre[10];
int matricula[10];
float c1[10],c2[10],c3[10],cp[10];
int i=0;


for(i=0; i<2 ;i++)
{
	printf("\n ingrese  su nombre:   ");
	scanf("%s",&nombre[i]);
		
	printf("\n su matricula:   ");
	scanf("%i",&matricula[i]);

	printf("\n ingrese  su primera calificacion:   ");
	scanf("%f",&c1[i]);
	printf("\n ingrese  su primera calificacion:   ");
	scanf("%f",&c2[i]);
	printf("\n ingrese  su primera calificacion:   ");
	scanf("%f",&c3[i]);	
cp[i]=(c1[i]+c2[i]+c3[i])/3;



}

for(i=0; i<2 ;i++)
{


printf("\n matricula:%i | nombre %c |primera sec:%f |segunda sec:%f |tercera sec: %f | promedio: %f",matricula[i],nombre[i],c1[i],c2[i],c3[i],cp[i]);
}
getch();
}
