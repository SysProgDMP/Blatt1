#include <stdio.h>

int  umwandeln (char buchstabe){
	switch (buchstabe){
		case 'a' : return 1; break;
		case 'b' : return 2; break;
		case 'c' : return 3; break;
		case 'd' : return 4; break;
		case 'e' : return 5; break;
		case 'f' : return 6; break;
		case 'g' : return 7; break;
		case 'h' : return 8; break;
		case 'i' : return 9; break;
		case 'j' : return 10; break;
		case 'k' : return 11; break;
		case 'l' : return 12; break;
		case 'm' : return 13; break;
		case 'n' : return 14; break;
		case 'o' : return 15; break;
		case 'p' : return 16; break;
		case 'q' : return 17; break;
		case 'r' : return 18; break;
		case 's' : return 19; break;
		case 't' : return 20; break;
		case 'u' : return 21; break;
		case 'v' : return 22; break;
		case 'w' : return 23; break;
		case 'x' : return 24; break;
		case 'y' : return 25; break;
		case 'z' : return 26; break;
		case '-' : return 27; break;
		default: 28;
		}
	}

void insert (char[] vorname , char[] nachname, List* l){
	NODE cursor = l.head;
	NODE tmp = malloc (sizeof NODE);
	tmp.nachname = nachname;
	tmp.vorname = vorname;
	
	
	
}	

int main (){
	char a = 'c';
	int erg = umwandeln (a);
	printf ("a enthaelt %i",erg);
	return 0;
}