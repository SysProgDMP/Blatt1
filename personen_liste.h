#ifndef _PERSONEN_LIST_H
#define _PERSONEN_LISTE_H

//definiert die Struktur eines Nodes
typedef struct NODE{
	struct NODE* next;
	char* vorname;
	char* nachname;
}NODE;
// definiert die Struktur einer Liste
typedef struct LIST{
	NODE* head;
}LIST;

LIST *list_create();
NODE *node_create(char *name);
void insert(char*name, LIST* l);
void ausgabe(LIST* l);
void free_list(LIST *l);

#endif
