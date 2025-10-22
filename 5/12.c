#include <stdio.h>

int n;

_Bool scan() {
    printf("Введите количество элементов: ");
    scanf("%d", &n);

    return n > 0;
}

int main() {
    while (scan()) {
        double sum1, sum2 = sum1 = 0.0;
        int sign = 1;

        for (int i = 1; i <= n; i++) {
            const double val = 1.0 / i;
            sum1 += val;
            sum2 += sign * val;
            sign = -sign;

            printf("Элемент %d: сумма1 = %lf, сумма2 = %lf\n", i, sum1, sum2);
        }
        printf("\n");
    }

    return 0;
}