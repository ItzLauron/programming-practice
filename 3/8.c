#include <stdio.h>

int main() {
    printf("Введите объём в чашках: ");
    int value;
    scanf("%d", &value);
    value /= 2;
    printf("В пинтах: %d\n", value);
    value *= 16;
    printf("В унциях: %d\n", value);
    value *= 2;
    printf("В столовых ложках: %d\n", value);
    value *= 3;
    printf("В чайных ложках: %d\n", value);
    return 0;
}
