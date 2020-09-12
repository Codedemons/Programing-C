#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#define tamanio system("mode 110,30");

//solo es el tamaño de las ventanas
void medidas() 
{
	tamanio
}

//declara el titulo en la barra de tareas
void titulo(char *txt)
{
	char text[80];
	strcpy(text,"title ");
	strncat(text,txt,6);
	system(text);
}

//es lo mismo que el de titulo pero en este lo hace el sistemas de dev
void title(char*txt)
{
SetConsoleTitle(txt);
}

void Config()
{
	medidas();
	title("Juego del gato");
	ocultarcursor();
	bordes(0,79,0,29);
	bodesM();
	Lineas_Cat();
//	Gato_Player_1();
}
