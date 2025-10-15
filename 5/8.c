#include <stdio.h>

int first, second;

void scan() {
    printf("%d %% %d равно %d\n", first, second, first % second);
    printf("Введите следующее число для первого операнда (<= О для выхода из программы): ");
    scanf("%d", &first);
}

int main() {
    printf("Эта программа вычисляет результаты деления по модулю.\n");
    printf("Введите целое число, которое будет служить вторым операндом: ");
    scanf("%d", &second);
    printf("Теперь введите первьй операнд: ");
    scanf("%d", &first);
    scan();
    while (first > 0) {
        scan();
    }
    printf("Готово");
    return 0;
}
