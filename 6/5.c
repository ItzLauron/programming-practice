#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case '.':
                putchar('!');
                count++;
                break;
            case '!':
                printf("!!");
                count++;
                break;
            default: printf("%c", ch);
        }
    }

    printf("Количество произведённых замен: %d\n", count);

    return 0;
}