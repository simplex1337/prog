lul.a: ./obj/main.o ./obj/strings.o ./obj/add.o
	gcc -o lul.a ./obj/main.o ./obj/strings.o ./obj/add.o -O0

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o

./obj/strings.o: ./src/strings.c
	gcc -c ./src/strings.c -o ./obj/strings.o
	
./obj/add.o: ./src/add.c
	gcc -c ./src/add.c -o ./obj/add.o