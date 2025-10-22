#include <stdio.h>
#include <string.h>

int main() {
    printf("Введите слово: ");
    char str[20];
    scanf("%20s", &str);

    for (int i = strlen(str) - 1; i >= 0; i--) printf("%c", str[i]);
    printf("\n");

    return 0;
}