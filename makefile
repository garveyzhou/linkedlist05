default: test.o link.o
	gcc -o test.o link.o

test.o: test.c link.h
	gcc -c list.c

link.o: link.c link.h
	gcc -c link.c

run:
	./a.out

clean:
	rm -f *.exe *.out *~ *.o
