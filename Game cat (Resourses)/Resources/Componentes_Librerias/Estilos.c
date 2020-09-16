#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define alt 30-1
#define larg 80-1
#define LargM 110-1
//Estilso Menu
#define Sig_176 176
#define Sig_177 177
#define Sig_178 178

//Estilos De gato juego en proceso 
#define Sig_185 185
#define Sig_186 186
#define Sig_187 187
#define Sig_188 188
#define Sig_200 200
#define Sig_201 201
#define Sig_202 202
#define Sig_203 203
#define Sig_204 204
#define Sig_205 205
#define Sig_206 206
#define tamanio_2 system("mode 82,30");
//Estilo Fuego Principal 

int AColo = 20;
int ACol = 20;
int ACo = 20;
int AC = 20;

void bordes(int alt_ini,int alt_fin, int larg_ini, int larg_fin)
{
	int i,j;
	gotoxy_Car(0,0,Sig_201);//esquina superior
	gotoxy_Car(0,29,Sig_200);//esquina inferior
	gotoxy_Car(79,0,Sig_203);
	gotoxy_Car(79,29,Sig_202);
	
	for(i=1; i<larg; i++)
	{		
		gotoxy_Car(i,larg_ini,Sig_205);
		gotoxy_Car(i,larg_fin,Sig_205);
	}
	for(i=1; i<alt; i++)
	{		
		gotoxy_Car(alt_ini,i,Sig_186);
		gotoxy_Car(alt_fin,i, Sig_186);		
	}
	
}

void bodesM()
{
	int i;
	gotoxy_Car(109,29,Sig_188);
	gotoxy_Car(109,0,Sig_187);
	
	for(i=80; i<LargM; i++)
	{
		gotoxy_Car(i,0,Sig_205); //Lineas Superior
		gotoxy_Car(i,29,Sig_205); //Linea Inferior
		gotoxy_Car(i,4,Sig_205); //Linea titulo
		gotoxy_Car(i,27,Sig_205); //Linea fecha
		gotoxy_Car(i,16,Sig_205); //
		gotoxy_Car(i,6,Sig_205); //
		gotoxy_Car(i,10,Sig_205); //
		gotoxy_Car(i,12,Sig_205); //
	}
	for(i=1; i<alt; i++)
	{		
		gotoxy_Car(109,i, Sig_186);//Liena final derecha 
	}
	for(i=1; i<16; i++)
	{		
		gotoxy_Car(94,i, Sig_186);//
	}
	
	gotoxy_Car(79,4,Sig_204);
	gotoxy_Car(79,6,Sig_204);
	gotoxy_Car(79,10,Sig_204);
	gotoxy_Car(79,12,Sig_204);
	gotoxy_Car(79,16,Sig_204);
	gotoxy_Car(79,27,Sig_204);

	gotoxy_Car(94,0,Sig_203);
	gotoxy_Car(94,4,Sig_206);
	gotoxy_Car(94,6,Sig_206);
	gotoxy_Car(94,10,Sig_206);
	gotoxy_Car(94,12,Sig_206);
	gotoxy_Car(94,16,Sig_202);
		
	gotoxy_Car(109,4,Sig_185);
	gotoxy_Car(109,6,Sig_185);
	gotoxy_Car(109,10,Sig_185);
	gotoxy_Car(109,12,Sig_185);
	gotoxy_Car(109,16,Sig_185);
	gotoxy_Car(109,27,Sig_185);
	
	gotoxy_text(83,2,"Player 1");
	gotoxy_text(83,5,"Ganado");
	gotoxy_text(83,11,"Perdido");
	gotoxy_text(98,2,"Player 2");
	gotoxy_text(98,5,"Ganado");
	gotoxy_text(98,11,"Perdido");
}


 void Lineas_Cat()
 {
int i;
 for(i=2; i<28; i++)
	{		
		gotoxy_Car(30,i, Sig_186); 
		gotoxy_Car(50,i, Sig_186); 
	}	
		for(i=14; i<68; i++)
	{		
		gotoxy_Car(i,10, Sig_205);
		gotoxy_Car(i,19, Sig_205);
	}
gotoxy_Car(30,19, Sig_206);
gotoxy_Car(50,19, Sig_206);
gotoxy_Car(50,10, Sig_206);
gotoxy_Car(30,10, Sig_206);
	
 }
 
 
 
// Estilos Menu 

void MenuPrin()
{
ocultarcursor();
tamanio_2
 
Marco();
 
}


//cuadros de lineas por Oocion
void Marco()
{
int i;	
const char *Opc[] ={"1.-iniciar Juego.","2.-Cargar partida.","3.-Records.","4.-Salir."};

int j;
int color;
color = 40;
 
//opc _1

 for(i=10; i<28; i++)
 {
 	for(j=6; j<14; j++)
	 {
 	  gotoxy_color(i,j,color); printf("%c",0);
	 }  
 }
 
//opc _2 
  for(i=31; i<50; i++)
 {
 	for(j=6; j<14; j++)
	 {
 	  gotoxy_color(i,j,color); printf("%c",0);
	 }  
 }
 
 //opc _3
  for(i=53; i<72; i++)
 {
 	for(j=6; j<14; j++)
	 {
 	  gotoxy_color(i,j,color); printf("%c",0);
	 }  
 }
 //opc _4
  for(i=31; i<50; i++)
 {
 	for(j=16; j<24; j++)
	 {
 	  gotoxy_color(i,j,color); printf("%c",0);
	 }  
 }
	Color(7);
		
	gotoxy_text(11,10,Opc[0]);
	gotoxy_text(32,10,Opc[1]);
	gotoxy_text(56,10,Opc[2]);
	gotoxy_text(36,19,Opc[3]);
	for(i=7; i<14; i++)
	{
		gotoxy_Car(9,i, Sig_186); 
		gotoxy_Car(28,i, Sig_186); 		
		gotoxy_Car(30,i, Sig_186); 
		gotoxy_Car(50,i, Sig_186); 
		gotoxy_Car(52,i, Sig_186); 
		gotoxy_Car(72,i, Sig_186); 	
	}
	for(i=31; i<50; i++)
	{		
		gotoxy_Car(i,6, Sig_205);
		gotoxy_Car(i,14, Sig_205);
		gotoxy_Car(i,15, Sig_205);
		gotoxy_Car(i,23, Sig_205);
	}	
	for(i=10; i<28; i++)
	{		
		gotoxy_Car(i,6, Sig_205);
		gotoxy_Car(i,14, Sig_205);
	}
	for(i=16; i<23; i++)
	{		
		gotoxy_Car(30,i, Sig_186); 
		gotoxy_Car(50,i, Sig_186); 	
	}
		for(i=53; i<72; i++)
	{		
		gotoxy_Car(i,6, Sig_205);
		gotoxy_Car(i,14, Sig_205);
	}
	
}

 

