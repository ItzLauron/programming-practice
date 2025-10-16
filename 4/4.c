#include <stdio.h>

const double FOOT = 30.48;
const double INCH = 0.393701;

float value;

void scan() {
    printf("Введите высоту в сантиметрах: ");
    scanf("%f", &value);
}

int main() {
    scan();
    while (value > 0) {
        printf("%f см = %d футов, %f дюймов\n", value, (int) (value / FOOT), value * INCH);
        scan();
    }
    printf("Работа завершена.\n");
    return 0;
}