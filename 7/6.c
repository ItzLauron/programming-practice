#include <ctype.h>
#include <locale.h>
#include <stdio.h>

char get_first(void);

int main(void) {
    setlocale(LC_ALL, "");
    printf("Введите строку, где встречается не пробельный символ: ");
    printf("Первый епробельный символ: %c\n", get_first());
    return 0;
}

char get_first(void) {
    char ch;
    while (isspace(ch = getchar())) {}
    return ch;
}