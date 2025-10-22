#include <stdio.h>

int main() {
    printf("Введите верхний и нижний пределы: ");
    int end, start;
    scanf("%d%d", &end, &start);

    for (int i = start; i <= end; i++)
        printf("Число: %d, число в ^2: %d, число в ^3: %d\n", i, i*i, i*i*i);

    return 0;
}