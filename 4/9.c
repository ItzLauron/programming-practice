#include <stdio.h>

const double FOR_CELCIUS_FIRST = 5.0 / 9.0;
const int FOR_CELSIUS_SECOND = 32;
const double FOR_KELVIN = 273.16;

void print() {
    printf("Введите температуру по Фаренгейту: ");
}

void temperatures(double value) {
    double celsius = FOR_CELCIUS_FIRST * (value - FOR_CELSIUS_SECOND);
    printf("Значение по Цельсию: %.2lf, значение по Кельвину: %.2lf\n", celsius, celsius + FOR_KELVIN);
}

int main() {
    double value;
    print();
    while (scanf("%lf", &value) == 1) {
        temperatures(value);
        print();
    }
    return 0;
}