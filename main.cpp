#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
int main(int argc, char** argv) {
char* str = (char*)malloc(sizeof(char) * SIZE);
printf("Введите своё имя:\n");
<<<<<<< HEAD
str = gets(str);
puts("Привет");
puts(str);
=======
scanf("%s", str);
puts("Привет");
puts(str);
>>>>>>> c591d69 (Исправлено приветствие)
return 0;
}
