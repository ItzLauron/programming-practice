#include <stdio.h>

int length = 0;
char ch;

_Bool scan() {
    scanf("%c", &ch);
    return (length < 255) * (ch != '\n');
}

int main() {
    char str[256];
    printf("Введите строку: ");

    while (scan()) str[length++] = ch;
    str[length] = '\0';

    printf("Строка в обратном порядке: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
