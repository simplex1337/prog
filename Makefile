lul.a: main.o strings.o
	gcc -o lul.a ./obj/main.o ./obj/strings.o

main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o

strings.o: ./src/strings.c
	gcc -c ./src/strings.c -o ./obj/strings.o