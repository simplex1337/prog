all: lul

lul: main.o strings.o
	gcc -o lul obj/main.o obj/strings.o

obj/main.o: main.c
	gcc -c main.c -o obj/main.o
    
obj/strings.o: strings.c
	gcc -c strings.c -o obj/strings.o