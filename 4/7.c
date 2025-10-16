#include <stdio.h>

void cube(double value) {
    printf("%lf\n", value*value);
}

int main() {
    printf("Введите число: ");
    double value;
    scanf("%lf", &value);
    cube(value);
    return 0;
}

