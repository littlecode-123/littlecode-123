fortest1:main.o fun.o
	gcc main.o fun.o -o fortest1
main.o:main.c uhead.h
	gcc main.c -c
fun.o:fun.c
	gcc fun.c -c
clean:
	rm -f *.o
