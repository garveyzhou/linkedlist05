default: list.o link.o
	gcc -o test list.o link.o

list.o: list.c link.h
	gcc -c list.c

link.o: link.c link.h
	gcc -c link.c

run:
	./test

clean:
	rm -f *.exe *.out *~ *.o
