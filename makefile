all: link.o test.o link.h
	gcc link.o test.o

run: all
	./a.out

link.o: link.c
	gcc -c link.c

test.o: test.c
	gcc -c test.c

clean:
	rm *.o -f
	rm a.out -f