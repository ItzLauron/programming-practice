#include <stdio.h>

long start, end;

_Bool scan() {
    printf("Введите нижний и верхний целочисленные пределы: ");
    scanf("%d%d", &start, &end);
    return start < end;
}

int main() {
    while (scan()) {
        long sum = 0;
        for (long i = start; i <= end; i++) sum += i * i;
        printf("Сумма квадратов целых чисел от %ld до %ld равна %ld\n", start * start, end * end, sum);
    }
    printf("Работа завершена\n");

    return 0;
}