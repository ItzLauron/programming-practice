#include <stdio.h>

int main() {
    printf("Введите рост в дюймах: ");
    int value;
    scanf("%d", &value);
    printf("Рост в сантиметрах: %f\n", value * 2.54);
}
