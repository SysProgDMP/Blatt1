#include <stdio.h>
#include <stdlib.h>

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
		default: return 28;
		}
	}
	
	//gibt die Länge eines Char-Arrays zurück
	
int size(char *ptr){
    int offset = 0;
    int count = 0;
    while (*(ptr + offset) != '\0'){
        count++;
        offset++;
    }
    return count;
}

	// gibt 1 , 0 oder -1 zurück : 	Bei 1 ist der erste Name der, der weiter oben in der Liste stehen soll 
	//								Bei 0 sind beide Namen gleich
	//								Bei -1 ist der zweite Name der der weiter oben in der Liste stehen soll
	
int vergleich (char* vorname, char* nachname, char* vorname1, char* nachname1){
	int i ;
	
	for (i=0; i<101; i++){
		if (i>= size(vorname)&& i>=size(vorname1)) break;  
		if (i>= size(vorname)) return 1;
		if (i>=size(vorname1)) return -1;
		int Intvor = umwandeln (vorname [i]);
		int Intvor1 = umwandeln (vorname1 [i]);
		if (Intvor <Intvor1) return 1;
		if (Intvor > Intvor1) return -1;
	}
	int j;
	for (j=0; j<101; j++){
		if (j>= size(nachname)&& j>=size (nachname1)) return 0;
		if (j>= size(nachname))return 1;
		if (j>=size(nachname1)) return -1;
		int Intvor = umwandeln (nachname [j]);
		int Intvor1 = umwandeln (nachname1 [j]);
		if (Intvor <Intvor1) return 1;
		if (Intvor > Intvor1) return -1;
	}	
	return 0;
}



int main (){
	char *hallo = malloc(2*sizeof(char));
	*hallo= 'h';
	*(hallo+1)= 'a';
	char* hallo1= malloc (sizeof(char));
	*hallo1='a';
	char* gerd = malloc (2*sizeof(char));
	*gerd='h';
	*(gerd+1)='a';
	char* gerd1 = malloc(sizeof(char));
	*gerd1='h';
	int i = vergleich (hallo, hallo1, gerd, gerd1);
	printf ("%i",i);
	free (hallo);
	free (hallo1);
	free (gerd);
	free (gerd1);
	return 0;
}