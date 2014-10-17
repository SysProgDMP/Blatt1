	OBJECTS = my_string.o personen_liste.o
	CPPFLAGS = -g -Wall


	prog: code.o mylist.o 
        gcc $(CPPFLAGS) -o prog $(OBJECTS)
        
	my_string.o: my_string.c
          gcc $(CPPFLAGS) -c my_string.c

	personen_liste.o: personen_liste.c
		gcc $(CPPFLAGS) -c personen_liste.c