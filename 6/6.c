#include <stdio.h>

int main() {
    char oldCh;
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#') {
        if (oldCh == 'e' && ch == 'i') count++;
        oldCh = ch;
    }

    printf("Количество вхождений последовательности ei: %d\n", count);
    return 0;
}