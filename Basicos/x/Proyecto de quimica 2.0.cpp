#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void)
{
	float neutrones, H=1.000794, He=4.002602, Li=6.94, Be=9.012182, B=10.811, C=12.0107, N=14.0067, O=15.9994, F=18.9984032, Ne=20.1797, Na=22.989770,
					 Mg=24.3050, Al=26.981538, Si=28.0855, P=30.973761, S=32.065, Cl=35.453, Ar=39.948, K=39.093, Ca=40.078, Sc=44.955910, Ti=47.867,
					 V=50.9415, Cr=51.9961, Mn=54.938049, Fe=55.845, Co=58.933200, Ni=58.6934, Cu=63.546, Zn=65.409, Ga=69.723, Ge=72.64, As=74.92160,
					 Se=78.96, Br=79.904, Kr=83.796, Rb=85.4678, Sr=87.62, Y=88.90585, Zr=91.224, Nb=92.90638, Mo=95.94, Tc=98, Ru=101.07, Rh=102.90550,
					 Pd=106.42, Ag=107.8682, Cd=112.411, In=114.818, Sn=118.7107, Sb=121.760, Te=127.60, I=126.90447, Xe=131.293, Cs=132.9054, Ba=137.327,
					 La=138.9055, Ce=140.116, Pr=140.116, Nd=144.24, Pm=147, Sm=150.35, Eu=151.964, Gd=157.25, Tb=158.92534, Dy=162.500, Ho=164.93032,
					 Er=167.259, Tm=168.93421, Yb=173.04, Lu=174.967, Hf=178.49, Ta=180.9479, W=183.84, Re=186.207, Os=190.23, Ir=192.217, Pt=195.078,
					 Au=196.96655, Hg=200.59, Tl=204.3833, Pb=207.2, Bi=208.98038, Po=209, At=210, Rn=222, Fr=223, Ra=226, Ac=227, Th=232.0381, Pa=231.03588,
					 U=238.02891, Np=237, Pu=244, Am=243, Cm=247, Bk=247, Cf=251, Es=252, Fm=257, Md=258, No=259, Lr=262, Rf=261, Db=262, Sg=266, Bh=264,
					 Hs=277, Mt=268, Mv=281, Pl=272, Da=277, Tf=272, Eo=285, Me=279, Nc=289, El=286, On=288;
	int opcion;


	do
	{		//inicio de do while
	system("color 17");
	printf("=======================================================================================\n\n");
	printf("		<<<BIENVENIDO AL MUNDO DE LA QUIMICA :D>>>				\n\n\n");
	printf("**Te ayudaremos a saber el total de electrones, protones y neutrones de cada elemento**				\n\n\n");
	printf("=======================================================================================\n\n");
	printf("\t 1-Hidrogeno \t\t");
	printf("2-Helio \t\t");
	printf("3-Litio \n");
	printf("\t 4-Berilio \t\t"); 
	printf("5-Boro \t\t\t");
	printf("6-Carbono \n");
	printf("\t 7-Nitrogeno \t\t");
	printf("8-Oxigeno \t\t");
	printf("9-Fluor \n");
	printf("\t 10-Neon \t\t");
	printf("11-Sodio \t\t");
	printf("12-Magnesio \n");
	printf("\t 13-Aluminio \t\t");
	printf("14-Silicio \t\t");
	printf("15-Fosforo \n");
	printf("\t 16-Azufre \t\t");
	printf("17-Cloro \t\t");
	printf("18-Argon \n");
	printf("\t 19-Potasio \t\t");
	printf("20-Calcio \t\t");
	printf("21-Escandio \n");
	printf("\t 22-Titanio \t\t");
	printf("23-Vanadio \t\t");
	printf("24-Cromo \n");
	printf("\t 25-Manganeso \t\t");
	printf("26-Hierro \t\t");
	printf("27-Cobalto \n");
	printf("\t 28-Niquel \t\t");
	printf("29-Cobre \t\t");
	printf("30-Zinc \n");
	printf("\t 31-Galio \t\t");
	printf("32-Germandio \t\t");
	printf("33-Arsenico \n");
	printf("\t 34-Selenio \t\t");
	printf("35-Bromo \t\t");
	printf("36-Cripton \n");
	printf("\t 37-Rubidio \t\t");
	printf("38-Estroncio \t\t");
	printf("39-Itrio \n");
	printf("\t 40-Zirconio \t\t");
	printf("41-Niobio \t\t");
	printf("42-Molibdeno \n");
	printf("\t 43-Tecnecio \t\t");
	printf("44-Rutenio \t\t");
	printf("45-Rodio \n");
	printf("\t 46-Paladio \t\t");
	printf("47-Plata \t\t");
	printf("48-Cadmio \n");
	printf("\t 49-Indio \t\t");
	printf("50-Estaño \t\t");
	printf("51-Antimonio \n");
	printf("\t 52-Telurio \t\t");
	printf("53-Yodo \t\t");
	printf("54-Xenon \n");
	printf("\t 55-Cesio \t\t");
	printf("56-Bario \t\t");
	printf("57-Lantano \n");
	printf("\t 58-Cerio \t\t");
	printf("59-Praseodimio \t\t");
	printf("60-Neodimio \n");
	printf("\t 61-Prometio \t\t");
	printf("62-Samario \t\t");
	printf("63-Europio \n");
	printf("\t 64-Gadolinio \t\t");
	printf("65-Terbio \t\t");
	printf("66-Disprosio \n");
	printf("\t 67-Holmio \t\t");
	printf("68-Erbio \t\t");
	printf("69-Tulio \n");
	printf("\t 70-Iterbio \t\t");
	printf("71-Lutecio \t\t");
	printf("72-Hafnio \n");
	printf("\t 73-Tantalio \t\t");
	printf("74-Tungsteno \t\t");
	printf("75-Renio \n");
	printf("\t 76-Osmio \t\t");
	printf("77-Iridio \t\t");
	printf("78-Platino \n");
	printf("\t 79-Oro \t\t");
	printf("80-Mercurio \t\t");
	printf("81-Talio \n");
	printf("\t 82-Plomo \t\t");
	printf("83-Bismuto \t\t");
	printf("84-Polonio \n");
	printf("\t 85-Astato \t\t");
	printf("86-Radon \t\t");
	printf("87-Francio \n");
	printf("\t 88-Radio \t\t");
	printf("89-Actinio \t\t");
	printf("90-Torio \n");
	printf("\t 91-Proctactinio \t");
	printf("92-Uranio \t\t");
	printf("93-Neptunio \n");
	printf("\t 94-Plutonio \t\t");
	printf("95-Americio \t\t");
	printf("96-Curio \n");
	printf("\t 97-Berkelio \t\t");
	printf("98-Californio \t\t");
	printf("99-Einstenio \n");
	printf("\t 100-Fermio \t\t");
	printf("101-Mandelevio \t\t");
	printf("102-Nobelio \n");
	printf("\t 103-Laurencio \t\t");
	printf("104-Rutherford \t\t");
	printf("105-Dubnio \n");
	printf("\t 106-Seaborgio \t\t");
	printf("107-Bohrio \t\t");
	printf("108-Hassio \n");
	printf("\t 109-Meitnerio \t\t");
	printf("110-Madveded \t\t");
	printf("111-Plutirio \n");
	printf("\t 112-Darwanzio \t\t");
	printf("113-Tustrano \t\t");
	printf("114-Eristeneo \n");
	printf("\t 115-Merchel \t\t");
	printf("116-Nectarten \t\t");
	printf("117-Efelio \n");
	printf("\t 118-Oberon \t\t");
	printf("119-Salir\n\n");
	printf("\t\t Da el numero del elemento que deseas conocer: ");
	scanf("%d",&opcion);
	
	system("cls");
	system("color 47");
	printf("=======================================================================================\n\n");
	printf("		<<<BIENVENIDO AL MUNDO DE LA QUIMICA :D>>>				\n\n\n");
	printf("**El numero de electrones y protones de un elemento es igual al numero atomico del mismo** \n **El numero de neutrones es igual a la masa del elemento menos el numero atomico**\n\n\n");
	printf("=======================================================================================\n\n");
	switch(opcion)
		{//inicio switch
			
			case 1:
					{
					printf("\t Elegiste el Hidrogeno \n\t Su simbolo es H \n\t Su masa es: %f \n",H);
					neutrones=H-1;
					printf("\t Protones=1 \n\t Electrones=1 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 2:
					{
					printf("\t Elegiste el Helio \n\t Su simbolo es He \n\t Su masa es: %f \n",He);
					neutrones=He-2;
					printf("\t Protones=2 \n\t Electrones=2 \n\t Neutrones=%.f",neutrones);
					break;
					}
				
			case 3:
					{
					printf("\t Elegiste el Litio \n\t Su simbolo es Li \n\t Su masa es: %f \n",Li);
					neutrones=Li-3;
					printf("\t Protones=3 \n\t Electrones=3 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 4:
					{
					printf("\t Elegiste el Berilio \n\t Su simbolo es Be \n\t Su masa es: %f \n",Be);
					neutrones=Be-4;
					printf("\t Protones=4 \n\t Electrones=4 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 5:
					{
					printf("\t Elegiste el Boro \n\t Su simbolo es B \n\t Su masa es: %f \n",B);
					neutrones=B-5;
					printf("\t Protones=5 \n\t Electrones=5 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 6:
					{
					printf("\t Elegiste el Carbono \n\t Su simbolo es C \n\t Su masa es: %f \n",C);
					neutrones=C-6;
					printf("\t Protones=6 \n\t Electrones=6 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 7:
					{
					printf("\t Elegiste el Nitrogeno \n\t Su simbolo es N \n\t Su masa es: %f \n",N);
					neutrones=N-7;
					printf("\t Protones=7 \n\t Electrones=7 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 8:
					{
					printf("\t Elegiste el Oxigeno \n\t Su simbolo es O \n\t Su masa es: %f \n",O);
					neutrones=O-8;
					printf("\t Protones=8 \n\t Electrones=8 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 9:
					{
					printf("\t Elegiste el Flour \n\t Su simbolo es F \n\t Su masa es: %f \n",F);
					neutrones=F-9;
					printf("\t Protones=9 \n\t Electrones=9 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 10:
					{
					printf("\t Elegiste el Neon \n\t Su simbolo es Ne \n\t Su masa es: %f \n",Ne);
					neutrones=Ne-10;
					printf("\t Protones=10 \n\t Electrones=10 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 11:
					{
					printf("\t Elegiste el Sodio \n\t Su simbolo es Na \n\t Su masa es: %f \n",Na);
					neutrones=Na-11;
					printf("\t Protones=11 \n\t Electrones=11 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 12:
					{
					printf("\t Elegiste el Magnesio \n\t Su simbolo es Mg \n\t Su masa es: %f \n",Mg);
					neutrones=Mg-12;
					printf("\t Protones=12 \n\t Electrones=12 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 13:
					{
					printf("\t Elegiste el Aluminio \n\t Su simbolo es Al \n\t Su masa es: %f \n",Al);
					neutrones=Al-13;
					printf("\t Protones=13 \n\t Electrones=13 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 14:
					{
					printf("\t Elegiste el Silicio \n\t Su simbolo es Si \n\t Su masa es: %f \n",Si);
					neutrones=Si-14;
					printf("\t Protones=14 \n\t Electrones=14 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 15:
					{
					printf("\t Elegiste el Fosforo \n\t Su simbolo es P \n\t Su masa es: %f \n",P);
					neutrones=P-15;
					printf("\t Protones=15 \n\t Electrones=15 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 16:
					{
					printf("\t Elegiste el Azufre \n\t Su simbolo es S \n\t Su masa es: %f \n",S);
					neutrones=S-16;
					printf("\t Protones=16 \n\t Electrones=16 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 17:
					{
					printf("\t Elegiste el Cloro \n\t Su simbolo es Cl \n\t Su masa es: %f \n",Cl);
					neutrones=Cl-17;
					printf("\t Protones=17 \n\t Electrones=17 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 18:
					{
					printf("\t Elegiste el Argon \n\t Su simbolo es Ar \n\t Su masa es: %f \n",Ar);
					neutrones=Ar-18;
					printf("\t Protones=18 \n\t Electrones=18 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 19:
					{
					printf("\t Elegiste el Potasio \n\t Su simbolo es K \n\t Su masa es: %f \n",K);
					neutrones=K-19;
					printf("\t Protones=19 \n\t Electrones=19 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 20:
					{
					printf("\t Elegiste el Calcio \n\t Su simbolo es Ca \n\t Su masa es: %f \n",Ca);
					neutrones=Ca-20;
					printf("\t Protones=20 \n\t Electrones=20 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 21:
					{
					printf("\t Elegiste el Escandio \n\t Su simbolo es Sc \n\t Su masa es: %f \n",Sc);
					neutrones=Sc-21;
					printf("\t Protones=21 \n\t Electrones=21 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 22:
					{
					printf("\t Elegiste el Titanio \n\t Su simbolo es Ti \n\t Su masa es: %f \n",Ti);
					neutrones=Ti-22;
					printf("\t Protones=22 \n\t Electrones=22 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 23:
					{
					printf("\t Elegiste el Vanadio \n\t Su simbolo es V \n\t Su masa es: %f \n",V);
					neutrones=V-23;
					printf("\t Protones=23 \n\t Electrones=23 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 24:
					{
					printf("\t Elegiste el Cromo \n\t Su simbolo es Cr \n\t Su masa es: %f \n",Cr);
					neutrones=Cr-24;
					printf("\t Protones=24 \n\t Electrones=24 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 25:
					{
					printf("\t Elegiste el Manganeso \n\t Su simbolo es Mn \n\t Su masa es: %f \n",Mn);
					neutrones=Mn-25;
					printf("\t Protones=25 \n\t Electrones=25 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 26:
					{
					printf("\t Elegiste el Hierro \n\t Su simbolo es Fe \n\t Su masa es: %f \n",Fe);
					neutrones=Fe-26;
					printf("\t Protones=26 \n\t Electrones=26 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 27:
					{
					printf("\t Elegiste el Cobalto \n\t Su simbolo es Co \n\t Su masa es: %f \n",Co);
					neutrones=Co-27;
					printf("\t Protones=27 \n\t Electrones=27 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 28:
					{
					printf("\t Elegiste el Niquel \n\t Su simbolo es Ni \n\t Su masa es: %f \n",Ni);
					neutrones=Ni-28;
					printf("\t Protones=28 \n\t Electrones=28 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 29:
					{
					printf("\t Elegiste el Cobre \n\t Su simbolo es Cu \n\t Su masa es: %f \n",Cu);
					neutrones=Cu-29;
					printf("\t Protones=29 \n\t Electrones=29 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 30:
					{
					printf("\t Elegiste el Zinc \n\t Su simbolo es Zn \n\t Su masa es: %f \n",Zn);
					neutrones=Zn-30;
					printf("\t Protones=30 \n\t Electrones=30 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 31:
					{
					printf("\t Elegiste el Galio \n\t Su simbolo es Ga \n\t Su masa es: %f \n",Ga);
					neutrones=Ga-31;
					printf("\t Protones=31 \n\t Electrones=31 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 32:
					{
					printf("\t Elegiste el Germanio \n\t Su simbolo es Ge \n\t Su masa es: %f \n",Ge);
					neutrones=Ge-32;
					printf("\t Protones=32 \n\t Electrones=32 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 33:
					{
					printf("\t Elegiste el Arsenico \n\t Su simbolo es As \n\t Su masa es: %f \n",As);
					neutrones=As-33;
					printf("\t Protones=33 \n\t Electrones=33 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 34:
					{
					printf("\t Elegiste el Selenio \n\t Su simbolo es Se \n\t Su masa es: %f \n",Se);
					neutrones=Se-34;
					printf("\t Protones=34 \n\t Electrones=34 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 35:
					{
					printf("\t Elegiste el Bromo \n\t Su simbolo es Br \n\t Su masa es: %f \n",Br);
					neutrones=Br-35;
					printf("\t Protones=35 \n\t Electrones=35 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 36:
					{
					printf("\t Elegiste el Cripton \n\t Su simbolo es Kr \n\t Su masa es: %f \n",Kr);
					neutrones=Kr-36;
					printf("\t Protones=36 \n\t Electrones=36 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 37:
					{
					printf("\t Elegiste el Rubidio \n\t Su simbolo es Rb \n\t Su masa es: %f \n",Rb);
					neutrones=Rb-37;
					printf("\t Protones=37 \n\t Electrones=37 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 38:
					{
					printf("\t Elegiste el Estroncio \n\t Su simbolo es Sr \n\t Su masa es: %f \n",Sr);
					neutrones=Sr-38;
					printf("\t Protones=38 \n\t Electrones=38 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 39:
					{
					printf("\t Elegiste el Itrio \n\t Su simbolo es Y \n\t Su masa es: %f \n",Y);
					neutrones=Y-39;
					printf("\t Protones=39 \n\t Electrones=39 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 40:
					{
					printf("\t Elegiste el Zirconio \n\t Su simbolo es Zr \n\t Su masa es: %f \n",Zr);
					neutrones=Zr-40;
					printf("\t Protones=40 \n\t Electrones=40 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 41:
					{
					printf("\t Elegiste el Niobio \n\t Su simbolo es Nb \n\t Su masa es: %f \n",Nb);
					neutrones=Nb-41;
					printf("\t Protones=41 \n\t Electrones=41 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 42:
					{
					printf("\t Elegiste el Molibdeno \n\t Su simbolo es Mo \n\t Su masa es: %f \n",Mo);
					neutrones=Mo-42;
					printf("\t Protones=42 \n\t Electrones=42 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 43:
					{
					printf("\t Elegiste el Tecnecio \n\t Su simbolo es Tc \n\t Su masa es: %f \n",Tc);
					neutrones=Tc-43;
					printf("\t Protones=43 \n\t Electrones=43 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 44:
					{
					printf("\t Elegiste el Rutenio \n\t Su simbolo es Ru \n\t Su masa es: %f \n",Ru);
					neutrones=Ru-44;
					printf("\t Protones=44 \n\t Electrones=44 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 45:
					{
					printf("\t Elegiste el Rodio \n\t Su simbolo es Rh \n\t Su masa es: %f \n",Rh);
					neutrones=Rh-45;
					printf("\t Protones=45 \n\t Electrones=45 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 46:
					{
					printf("\t Elegiste el Paladio \n\t Su simbolo es Pd \n\t Su masa es: %f \n",Pd);
					neutrones=Pd-46;
					printf("\t Protones=46 \n\t Electrones=46 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 47:
					{
					printf("\t Elegiste la Plata \n\t Su simbolo es Ag \n\t Su masa es: %f \n",Ag);
					neutrones=Ag-47;
					printf("\t Protones=47 \n\t Electrones=47 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 48:
					{
					printf("\t Elegiste el Cadmio \n\t Su simbolo es Cd \n\t Su masa es: %f \n",Cd);
					neutrones=Cd-48;
					printf("\t Protones=48 \n\t Electrones=48 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 49:
					{
					printf("\t Elegiste el Indio \n\t Su simbolo es In \n\t Su masa es: %f \n",In);
					neutrones=In-49;
					printf("\t Protones=49 \n\t Electrones=49 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 50:
					{
					printf("\t Elegiste el Estaño \n\t Su simbolo es Sn \n\t Su masa es: %f \n",Sn);
					neutrones=Sn-50;
					printf("\t Protones=50 \n\t Electrones=50 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 51:
					{
					printf("\t Elegiste el Antimonio \n\t Su simbolo es Sb \n\t Su masa es: %f \n",Sb);
					neutrones=Sb-51;
					printf("\t Protones=51 \n\t Electrones=51 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 52:
					{
					printf("\t Elegiste el Telurio \n\t Su simbolo es Te \n\t Su masa es: %f \n",Te);
					neutrones=Te-52;
					printf("\t Protones=52 \n\t Electrones=52 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 53:
					{
					printf("\t Elegiste el Yodo \n\t Su simbolo es I \n\t Su masa es: %f \n",I);
					neutrones=I-53;
					printf("\t Protones=53 \n\t Electrones=53 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 54:
					{
					printf("\t Elegiste el Xenon \n\t Su simbolo es Xe \n\t Su masa es: %f \n",Xe);
					neutrones=Xe-54;
					printf("\t Protones=54 \n\t Electrones=54 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 55:
					{
					printf("\t Elegiste el Cesio \n\t Su simbolo es Cs \n\t Su masa es: %f \n",Cs);
					neutrones=Cs-55;
					printf("\t Protones=55 \n\t Electrones=55 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 56:
					{
					printf("\t Elegiste el Bario \n\t Su simbolo es Ba \n\t Su masa es: %f \n",Ba);
					neutrones=Ba-56;
					printf("\t Protones=56 \n\t Electrones=56 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 57:
					{
					printf("\t Elegiste el Lantano \n\t Su simbolo es La \n\t Su masa es: %f \n",La);
					neutrones=La-57;
					printf("\t Protones=57 \n\t Electrones=57 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 58:
					{
					printf("\t Elegiste el Cerio \n\t Su simbolo es Ce \n\t Su masa es: %f \n",Ce);
					neutrones=Ce-58;
					printf("\t Protones=58 \n\t Electrones=58 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 59:
					{
					printf("\t Elegiste el Praseodimio \n\t Su simbolo es Pr \n\t Su masa es: %f \n",Pr);
					neutrones=Pr-59;
					printf("\t Protones=59 \n\t Electrones=59 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 60:
					{
					printf("\t Elegiste el Neodimio \n\t Su simbolo es Nd \n\t Su masa es: %f \n",Nd);
					neutrones=Nd-60;
					printf("\t Protones=60 \n\t Electrones=60 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 61:
					{
					printf("\t Elegiste el Prometio  \n\t Su simbolo es Pm \n\t Su masa es: %f \n",Pm);
					neutrones=Pm-61;
					printf("\t Protones=61 \n\t Electrones=61 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 62:
					{
					printf("\t Elegiste el Samario \n\t Su simbolo es Sm \n\t Su masa es: %f \n",Sm);
					neutrones=Sm-62;
					printf("\t Protones=62 \n\t Electrones=62 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 63:
					{
					printf("\t Elegiste el Europio \n\t Su simbolo es Eu \n\t Su masa es: %f \n",Eu);
					neutrones=Eu-63;
					printf("\t Protones=63 \n\t Electrones=63 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 64:
					{
					printf("\t Elegiste el Gadolinio \n\t Su simbolo es Gd \n\t Su masa es: %f \n",Gd);
					neutrones=Gd-64;
					printf("\t Protones=64 \n\t Electrones=64 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 65:
					{
					printf("\t Elegiste el Terbio \n\t Su simbolo es Tb \n\t Su masa es: %f \n",Tb);
					neutrones=Tb-65;
					printf("\t Protones=65 \n\t Electrones=65 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 66:
					{
					printf("\t Elegiste el Disprosio \n\t Su simbolo es Dy \n\t Su masa es: %f \n",Dy);
					neutrones=Dy-66;
					printf("\t Protones=66 \n\t Electrones=66 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 67:
					{
					printf("\t Elegiste el Holmio \n\t Su simbolo es Ho \n\t Su masa es: %f \n",Ho);
					neutrones=Ho-67;
					printf("\t Protones=67 \n\t Electrones=67 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 68:
					{
					printf("\t Elegiste el Erbio \n\t Su simbolo es Er \n\t Su masa es: %f \n",Er);
					neutrones=Er-68;
					printf("\t Protones=68 \n\t Electrones=68 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 69:
					{
					printf("\t Elegiste el Tulio \n\t Su simbolo es Tm \n\t Su masa es: %f \n",Tm);
					neutrones=Tm-69;
					printf("\t Protones=69 \n\t Electrones=69 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 70:
					{
					printf("\t Elegiste el Iterbio \n\t Su simbolo es Yb \n\t Su masa es: %f \n",Yb);
					neutrones=Yb-70;
					printf("\t Protones=70 \n\t Electrones=70 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 71:
					{
					printf("\t Elegiste el Lutecio \n\t Su simbolo es Lu \n\t Su masa es: %f \n",Lu);
					neutrones=Lu-71;
					printf("\t Protones=71 \n\t Electrones=71 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 72:
					{
					printf("\t Elegiste el Hafnio \n\t Su simbolo es Hf \n\t Su masa es: %f \n",Hf);
					neutrones=Hf-72;
					printf("\t Protones=72 \n\t Electrones=72 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 73:
					{
					printf("\t Elegiste el Tantalio \n\t Su simbolo es Ta \n\t Su masa es: %f \n",Ta);
					neutrones=Ta-73;
					printf("\t Protones=73 \n\t Electrones=73 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 74:
					{
					printf("\t Elegiste el Tungsteno \n\t Su simbolo es W \n\t Su masa es: %f \n",W);
					neutrones=W-74;
					printf("\t Protones=74 \n\t Electrones=74 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 75:
					{
					printf("\t Elegiste el Renio \n\t Su simbolo es Re \n\t Su masa es: %f \n",Re);
					neutrones=Re-75;
					printf("\t Protones=75 \n\t Electrones=75 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 76:
					{
					printf("\t Elegiste el Osmio \n\t Su simbolo es Os \n\t Su masa es: %f \n",Os);
					neutrones=Os-76;
					printf("\t Protones=76 \n\t Electrones=76 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 77:
					{
					printf("\t Elegiste el Iridio \n\t Su simbolo es Ir \n\t Su masa es: %f \n",Ir);
					neutrones=Ir-77;
					printf("\t Protones=77 \n\t Electrones=77 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 78:
					{
					printf("\t Elegiste el Platino \n\t Su simbolo es Pt \n\t Su masa es: %f \n",Pt);
					neutrones=Pt-78;
					printf("\t Protones=78 \n\t Electrones=78 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 79:
					{
					printf("\t Elegiste el Oro \n\t Su simbolo es Au \n\t Su masa es: %f \n",Au);
					neutrones=Au-79;
					printf("\t Protones=79 \n\t Electrones=79 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 80:
					{
					printf("\t Elegiste el Mercurio \n\t Su simbolo es Hg \n\t Su masa es: %f \n",Hg);
					neutrones=Hg-80;
					printf("\t Protones=80 \n\t Electrones=80 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 81:
					{
					printf("\t Elegiste el Talio \n\t Su simbolo es Tl \n\t Su masa es: %f \n",Tl);
					neutrones=Tl-81;
					printf("\t Protones=81 \n\t Electrones=81 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 82:
					{
					printf("\t Elegiste el Plomo \n\t Su simbolo es Pb \n\t Su masa es: %f \n",Pb);
					neutrones=Pb-82;
					printf("\t Protones=82 \n\t Electrones=82 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 83:
					{
					printf("\t Elegiste el Bismuto \n\t Su simbolo es Bi \n\t Su masa es: %f \n",Bi);
					neutrones=Bi-83;
					printf("\t Protones=83 \n\t Electrones=83 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 84:
					{
					printf("\t Elegiste el Polonio \n\t Su simbolo es Po \n\t Su masa es: %f \n",Po);
					neutrones=Po-84;
					printf("\t Protones=84 \n\t Electrones=84 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 85:
					{
					printf("\t Elegiste el Astato \n\t Su simbolo es At \n\t Su masa es: %f \n",At);
					neutrones=At-85;
					printf("\t Protones=85 \n\t Electrones=85\n\t Neutrones=%.f",neutrones);
					break;
					}
			case 86:
					{
					printf("\t Elegiste el Radon \n\t Su simbolo es Ra \n\t Su masa es: %f \n",Ra);
					neutrones=Ra-86;
					printf("\t Protones=86 \n\t Electrones=86 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 87:
					{
					printf("\t Elegiste el Francio \n\t Su simbolo es Fr \n\t Su masa es: %f \n",Fr);
					neutrones=Fr-87;
					printf("\t Protones=87 \n\t Electrones=87 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 88:
					{
					printf("\t Elegiste el Radio \n\t Su simbolo es Ra \n\t Su masa es: %f \n",Ra);
					neutrones=Ra-88;
					printf("\t Protones=88 \n\t Electrones=88 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 89:
					{
					printf("\t Elegiste el Actinio \n\t Su simbolo es Ac \n\t Su masa es: %f \n",Ac);
					neutrones=Ac-89;
					printf("\t Protones=89 \n\t Electrones=89 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 90:
					{
					printf("\t Elegiste el Torio \n\t Su simbolo es Th \n\t Su masa es: %f \n",Th);
					neutrones=Th-90;
					printf("\t Protones=90 \n\t Electrones=90 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 91:
					{
					printf("\t Elegiste el Protactinio \n\t Su simbolo es Pa \n\t Su masa es: %f \n",Pa);
					neutrones=Pa-91;
					printf("\t Protones=91 \n\t Electrones=91 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 92:
					{
					printf("\t Elegiste el Uranio \n\t Su simbolo es U \n\t Su masa es: %f \n",U);
					neutrones=U-92;
					printf("\t Protones=92 \n\t Electrones=92 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 93:
					{
					printf("\t Elegiste el Neptunio \n\t Su simbolo es Np \n\t Su masa es: %f \n",Np);
					neutrones=Np-93;
					printf("\t Protones=93 \n\t Electrones=93 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 94:
					{
					printf("\t Elegiste el Plutonio \n\t Su simbolo es Pu \n\t Su masa es: %f \n",Pu);
					neutrones=Pu-94;
					printf("\t Protones=94 \n\t Electrones=94 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 95:
					{
					printf("\t Elegiste el Americio \n\t Su simbolo es Am \n\t Su masa es: %f \n",Am);
					neutrones=Am-95;
					printf("\t Protones=95 \n\t Electrones=95 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 96:
					{
					printf("\t Elegiste el Curio \n\t Su simbolo es Cm \n\t Su masa es: %f \n",Cm);
					neutrones=Cm-96;
					printf("\t Protones=96 \n\t Electrones=96 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 97:
					{
					printf("\t Elegiste el Berkelio \n\t Su simbolo es Bk \n\t Su masa es: %f \n",Bk);
					neutrones=Bk-97;
					printf("\t Protones=97 \n\t Electrones=97 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 98:
					{
					printf("\t Elegiste el Californio \n\t Su simbolo es Cf \n\t Su masa es: %f \n",Cf);
					neutrones=Cf-98;
					printf("\t Protones=98 \n\t Electrones=98 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 99:
					{
					printf("\t Elegiste el Einstenio \n\t Su simbolo es Es \n\t Su masa es: %f \n",Es);
					neutrones=Es-99;
					printf("\t Protones=99 \n\t Electrones=99 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 100:
					{
					printf("\t Elegiste el Fermio \n\t Su simbolo es Fm \n\t Su masa es: %f \n",Fm);
					neutrones=Fm-100;
					printf("\t Protones=100 \n\t Electrones=100 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 101:
					{
					printf("\t Elegiste el Mendelevio \n\t Su simbolo es Md \n\t Su masa es: %f \n",Md);
					neutrones=Md-101;
					printf("\t Protones=101 \n\t Electrones=101 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 102:
					{
					printf("\t Elegiste el Nobelio \n\t Su simbolo es No \n\t Su masa es: %f \n",No);
					neutrones=No-102;
					printf("\t Protones=102 \n\t Electrones=102 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 103:
					{
					printf("\t Elegiste el Laurencio \n\t Su simbolo es Lr \n\t Su masa es: %f \n",Lr);
					neutrones=Lr-103;
					printf("\t Protones=103 \n\t Electrones=103 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 104:
					{
					printf("\t Elegiste el Rutherfordio \n\t Su simbolo es Rf \n\t Su masa es: %f \n",Rf);
					neutrones=Rf-104;
					printf("\t Protones=104 \n\t Electrones=104 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 105:
					{
					printf("\t Elegiste el Dubnio \n\t Su simbolo es Db \n\t Su masa es: %f \n",Db);
					neutrones=Db-105;
					printf("\t Protones=105 \n\t Electrones=105 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 106:
					{
					printf("\t Elegiste el Seaborgio \n\t Su simbolo es Sg \n\t Su masa es: %f \n",Sg);
					neutrones=Sg-106;
					printf("\t Protones=106 \n\t Electrones=106 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 107:
					{
					printf("\t Elegiste el Bohrio \n\t Su simbolo es Bh \n\t Su masa es: %f \n",Bh);
					neutrones=Bh-107;
					printf("\t Protones=107 \n\t Electrones=107 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 108:
					{
					printf("\t Elegiste el Hassio \n\t Su simbolo es Hs \n\t Su masa es: %f \n",Hs);
					neutrones=Hs-108;
					printf("\t Protones=108 \n\t Electrones=108 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 109:
					{
					printf("\t Elegiste el Meitnerio \n\t Su simbolo es Mt \n\t Su masa es: %f \n",Mt);
					neutrones=Mt-109;
					printf("\t Protones=109 \n\t Electrones=109 \n\t Neutrones=%.f",neutrones);
					break;
					}	
			case 110:
					{
					printf("\t Elegiste el Madveded \n\t Su simbolo es Mv \n\t Su masa es: %f \n",Mv);
					neutrones=Mv-110;
					printf("\t Protones=110 \n\t Electrones=110 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 111:
					{
					printf("\t Elegiste el Plutirio \n\t Su simbolo es Pl \n\t Su masa es: %f \n",Pl);
					neutrones=Pl-111;
					printf("\t Protones=111 \n\t Electrones=111 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 112:
					{
					printf("\t Elegiste el Darwanzio \n\t Su simbolo es Da \n\t Su masa es: %f \n",Da);
					neutrones=Da-112;
					printf("\t Protones=112 \n\t Electrones=112 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 113:
					{
					printf("\t Elegiste el Tustrano \n\t Su simbolo es Tf \n\t Su masa es: %f \n",Tf);
					neutrones=Tf-113;
					printf("\t Protones=113 \n\t Electrones=113 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 114:
					{
					printf("\t Elegiste el Eristeneo \n\t Su simbolo es Eo \n\t Su masa es: %f \n",Eo);
					neutrones=Eo-114;
					printf("\t Protones=114 \n\t Electrones=114 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 115:
					{
					printf("\t Elegiste el Merchel \n\t Su simbolo es Me \n\t Su masa es: %f \n",Me);
					neutrones=Me-115;
					printf("\t Protones=115 \n\t Electrones=115 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 116:
					{
					printf("\t Elegiste el Nectarten \n\t Su simbolo es Nc \n\t Su masa es: %f \n",Nc);
					neutrones=Nc-116;
					printf("\t Protones=116 \n\t Electrones=116 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 117:
					{
					printf("\t Elegiste el Efelio \n\t Su simbolo es El \n\t Su masa es: %f \n",El);
					neutrones=El-117;
					printf("\t Protones=117 \n\t Electrones=117 \n\t Neutrones=%.f",neutrones);
					break;
					}
			case 118:
					{
					printf("\t Elegiste el Oberon \n\t Su simbolo es On \n\t Su masa es: %f \n",On);
					neutrones=On-118;
					printf("\t Protones=118 \n\t Electrones=118 \n\t Neutrones=%.f",neutrones);
					break;
					}
			default: printf("\n\t\t\t GRACIAS POR USAR NUESTRO PROGRAMA! :D\n\n\t\t\t Saliendo...");
		}//fin switch
		getch();
		system ("cls");
	}while(opcion!=119);			//fin de do while
	getch;
}

