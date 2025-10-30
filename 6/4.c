#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            putchar('!');
            count++;
        } else if (ch == '!') {
            printf("!!");
            count++;
        } else putchar(ch);
    }

    printf("Количество произведённых замен: %d\n", count);
    return 0;
}