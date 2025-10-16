#include <stdio.h>

int main() {
    printf("Введите число: ");
    int value;
    scanf("%d", &value);
    float endValue = value + 10;
    while (value <= endValue) {
        printf("%d\n", value++);
    }
    return 0;
}