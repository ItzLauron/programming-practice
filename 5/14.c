#include <stdio.h>

int main() {
    double arr[8];
    double arr2[8];

    double sum = 0;

    for (int i = 0; i < 8; i++) {
        printf("Введите число (%d): ", i);
        double val;
        scanf("%lf", &val);

        arr[i] = val;
        arr2[i] = sum += val;;
    }

    for (int i = 0; i < 8; i++) printf("%lf ", arr[i]);
    printf("\n");

    for (int i = 0; i < 8; i++) printf("%lf ", arr2[i]);
    printf("\n");

    return 0;
}