#include <stdio.h>
#include <stdlib.h>
#include "personen_liste.h"
#include "mystring.h"


int main(){
	char *buffer=malloc(205*sizeof(char));
	FILE* f=fopen("hallo.txt", "rb");		//erstellt Filepointer und öffnet Textdatei zum lesen(im Binärmodus, da sonst Unix, Windows etc untersch. Erg.)
	if(f==NULL){					//falls Datei nicht existiert Fehlermeldung + Programmende mit Fehler
		printf("Datei existiert nicht, Programm wird beendet");
		return 1;
	}
	LIST* list=malloc(1*sizeof(LIST));//Listpointer + zuweisen eines Listentyps
	while (fgets(buffer, 205, f)){
		printf("%s ", buffer);
		insert(buffer, list);;
	}
	printf("\n Hier die Ausgabe\n");
	fclose(f);
	ausgabe(list);
	//free_list(list);
	return 0;

}
