#include <stdio.h>

int main() {
    printf("Введите объём воды в квартах: ");
    int value;
    scanf("%d", &value);
    printf("Количество молекул: %f\n", value * 950 / 3e-23);
}
