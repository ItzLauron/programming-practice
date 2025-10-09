#include <stdio.h>

int main() {
    printf("Введите возраст в годах: ");
    int value;
    scanf("%d", &value);
    printf("Возраст в секундах: %f\n", value*3.156e+7);
    return 0;
}
