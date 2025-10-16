#include <stdio.h>

int main() {
    printf("Введите значение с плавающей запятой: ");
    float value;
    scanf("%f", &value);
    printf("Запись с фиксированной запятой: %f\n", value);
    printf("Экспоненциальная форма записи: %e\n", value);
    printf("Двоично-экспоненциальная предствавление: %a\n", value);
    return 0;
}
