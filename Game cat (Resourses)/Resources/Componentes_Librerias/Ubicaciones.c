#include<windows.h>
#include<stdio.h>

void gotoxy(int x, int y){
HANDLE hcon;
hcon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X =x;
dwPos.Y =y;
SetConsoleCursorPosition(hcon,dwPos);
}

void gotoxy_text(int Col,int Fil, char*txt)
{
	gotoxy(Col,Fil);
	printf("%s",txt);
}

void gotoxy_Car(int Col,int Fil, char txt)
{
	gotoxy(Col,Fil);
	printf("%c",txt);
}

