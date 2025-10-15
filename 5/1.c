#include <stdio.h>
const int HOUR_TO_MINUTES = 60;

float value;

void scan() {
    printf("Введите время в минутах: ");
    scanf("%f", &value);
}

int main() {
    scan();
    while (value > 0) {
        printf("Время в часах: %f\n", value / HOUR_TO_MINUTES);
        scan();
    }
    printf("Работа завершена.\n");
    return 0;
}