#include <stdio.h>

int value;

void scan() {
    printf("Введите количество дней: ");
    scanf("%d", &value);
}

int main() {
    scan();
    while (value > 0) {
        printf("%d дней составляют %d недели и %d дня.\n", value, value/7, value%7);
        scan();
    }
    printf("Работа завершена.\n");
    return 0;
}
