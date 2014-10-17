	OBJECTS = mystring.o personen_liste.o
	CPPFLAGS = -g -Wall


	prog: code.o mylist.o 
        gcc $(CPPFLAGS) -o prog $(OBJECTS)
        
	mystring.o: mystring.c
          gcc $(CPPFLAGS) -c my_string.c

	personen_liste.o: personen_liste.c
		gcc $(CPPFLAGS) -c personen_liste.c