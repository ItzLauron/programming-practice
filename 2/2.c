#include <stdio.h>

int main() {
    printf("Введите номер ASCII символа: ");
    int value;
    scanf("%d", &value);
    printf("ASCII символ: %c\n", (char) value);
    return 0;
}
