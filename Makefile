lul.a: main.o strings.o
	gcc -o lul.a main.o strings.o

obj/main.o: main.c
	gcc -c main.c -o main.o
	cp main.o obj
	
obj/strings.o: strings.c
	gcc -c strings.c -o strings.o