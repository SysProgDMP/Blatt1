#include <stdio.h>
#include <stdlib.h>
#include "personen_liste.h"
#include "mystring.h"
#include <stdlib.h>

LIST *list_create(){
	LIST *l=malloc(1*sizeof(LIST));
	if(l==NULL){
		printf("Fehler beim Erstellen der Liste");
	}
	return l;
}

NODE *node_create(char *name){
	int i, j,cnt=0;
	NODE *n=malloc(1*sizeof(NODE));
	if(n==NULL){
		printf("FEHLER beim Erstellen eines Nodes");
		return n;
	}
	n->vorname=malloc(101*sizeof(char));
	n->nachname=malloc(101*sizeof(char));
	for(i=0; name[i]!=' '; i++){
			n->vorname[i]=name[i];
		}
		n->vorname[i]='\0';
		i++;
		n->vorname=realloc(n->vorname,i*sizeof(char));
		j=i;
		for(;name[i]!='\0';i++){
			n->nachname[i-j]=name[i];
			cnt++;
		}
		n->nachname[i-j]=name[i];//test
		n->nachname=realloc(n->nachname,(cnt+1)*sizeof(char));
	return n;
}

void insert(char *name, LIST *l){
	NODE *tmp=node_create(name);
	NODE *cursor=l->head;
	if(cursor==NULL){
		l->head=tmp;
		return;
	}
		
	
	if(vergleich(tmp->vorname, tmp->nachname, cursor->vorname, cursor->nachname)<0){
		tmp->next=cursor;
		l->head=tmp;
		return;
	}
	cursor=cursor->next;
	NODE *cursor2=l->head;
	while (cursor!=NULL){
		if(vergleich(tmp->vorname, tmp->nachname, cursor->vorname, cursor->nachname)<0){
			tmp->next=cursor;
			cursor2->next=tmp;
			return;
		}
		cursor=cursor->next;
		cursor2=cursor2->next;
	}
	tmp->next=cursor;
			cursor2->next=tmp;
}

void ausgabe(LIST *l){
	NODE *cursor=l->head;
	while(cursor!=NULL){
		printf("%s %s\n", cursor->vorname, cursor->nachname);
		cursor=cursor->next;
	}
}

void free_list(LIST *l){
	NODE *cursor, *cursor2;
	if(l==NULL)
		return;
	cursor=l->head;
	cursor=cursor->next;
	cursor2=l->head;
	while(cursor!=NULL){
		free(cursor2->vorname);
		free(cursor2->nachname);
		free(cursor2);
		cursor2=cursor;
		cursor=cursor->next;
	}
	free(l);
	
}
