#include <stdio.h>

int main() {
    printf("Введите число с плавающей запятой: ");
    float value;
    scanf("%f", &value);
    printf("В десятичной форме: %f, экспоненциальная форма: %e\n", value, value);
    return 0;
}
