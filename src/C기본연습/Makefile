.PHONY: clean

CFLAGS=-Wall -g

makeTest.out: main.o pointer_typeCast.o
	gcc -o makeTest.out main.o pointer_typeCast.o
main.o: main.c
	gcc -c -o main.o main.c
pointer_typeCast.o: pointer_typeCast.c
	gcc -c -o pointer_typeCast.o pointer_typeCast.c
clean:
	rm -f makeTest *.o