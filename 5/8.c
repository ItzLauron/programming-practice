#include <stdio.h>

float first, second;

int scan() {
    printf("Введите два числа с плавающей запятой: ");
    return scanf("%f%f", &first, &second);
}

int main() {
    while (scan() == 2)
        printf("%f\n", (first - second) / (first * second));

    return 0;
}