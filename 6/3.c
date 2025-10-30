#include <stdio.h>

int main(void) {
    int countEvenNums = 0;
    int sumEvenNums = 0;
    int countNonEvenNums = 0;
    int sumNotEvenNums = 0;
    int value;

    while (scanf("%d", &value) == 1 && value != 0) {
        if (value % 2 == 0) {
            sumEvenNums += value;
            countEvenNums++;
        } else {
            sumNotEvenNums += value;
            countNonEvenNums++;
        }
    }

    printf(
        "Количество чётных чисел: %d, среднее значение чётных чисел: %d, количество нечётных чисел: %d, среднее значение нечётных чисел: %d\n",
        countEvenNums,
        sumEvenNums / countEvenNums,
        countNonEvenNums,
        sumNotEvenNums / countNonEvenNums
    );

    return 0;
}