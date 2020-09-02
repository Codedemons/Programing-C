#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define alt 30-1
#define larg 80-1
#define LargM 110-1
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


