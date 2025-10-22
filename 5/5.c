#include <stdio.h>

int main() {
    char end;
    printf("Введите прописную букву: ");
    scanf("%c", &end);

    for (int i = 0; 'A' + i <= end; i++) {
        for (int j = 0; j < end - 'A' - i; j++) printf(" ");
        for (int j = 0; j <= i; j++) printf("%c", 'A' + j);
        for (int j = i - 1; j >= 0; j--) printf("%c", 'A' + j);

        printf("\n");
    }

    return 0;
}
