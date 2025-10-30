#include <stdio.h>

int main(void) {
    int count = 0;
    char ch;

    while ((ch = getchar()) != '#') {
        printf("%c-%d  ", ch, ch);
        if (++count % 8 == 0) printf("\n");
    }

    return 0;
}