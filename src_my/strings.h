#include <stdio.h>
#include <stdlib.h>

int stok(char *str, char delim, char *ptr[], int size); //соль. разбиение строк на поля(токены)
int schr(char *suf, char delim, int size); //вычисление индекса delim
int suntok(char str[], char delim, char *ptr[], int cnt); //сольсоли. объединение полей в строку
int slen(char str[]); //функция для расчёта длины строки
char scopy(char s1[], int i, int size); //копирование строки в другую строку
int sequal(char s1[], char s2[]); //проверка на одинаковость