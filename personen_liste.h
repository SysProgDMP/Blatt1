
// definiert die Struktur einer Liste
typedef struct{
	NODE* head;
}LIST;
//definiert die Struktur eines Nodes
typedef struct{
	NODE* next;
	char* vorname;
	char* nachname;
}NODE;
//fügt neues Element alphabetisch sortiert ein
void insert(char* vorname, char* nachname, LIST* l){
	NODE* tmp=malloc(sizeof(NODE));		//neues Node-Element erstellen
	*tmp.vorname=*vorname;				//und...
	*tmp.nachnme=*nachname;				//alles zuweisen
	
	NODE* cursor=*l.head;
	while(cursor.next!=null){			//solange nicht am Ende der Liste
		if(vergleich(vorname, nachname, *cursor.vorname, *cursor.nachname)<0){				//alphabetischer Vergleich
			tmp.next=cursor.next;
			cursor.next=tmp;
		}
		
		else
			cursor=cursor.next;
	}
	
}
