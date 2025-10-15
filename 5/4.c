#include <stdio.h>

float value;

void scan() {
    printf("Введите высоту в сантиметрах: ");
    scanf("%f", &value);
}

int main() {
    scan();
    while (value > 0) {
        printf("%f см = %d футов, %f дюймов\n", value, (int) (value / 30.48), value * 0.393701);
        scan();
    }
    printf("Работа завершена.\n");
    return 0;
}