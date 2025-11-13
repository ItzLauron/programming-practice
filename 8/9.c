#include <stdio.h>

void copyArr(double target[][5], double source[][5], int first, int second);
void print(double* arr, int size);

int main(void) {
    int n = 3, m = 5;

    double arr[3][5] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.10},
        {11.11, 12.12, 13.13, 14.14, 15.15}
    };

    printf("Массив:\n");
    for (int i = 0; i < n; i++) print(arr[i], m);

    double newArr[3][5];
    copyArr(newArr, arr, n, m);

    printf("Скопированный массив:\n");
    for (int i = 0; i < n; i++) print(newArr[i], m);

    return 0;
}

void copyArr(double target[][5], double source[][5], int first, int second) {
    for (int i = 0; i < first; i++)
        for (int j = 0; j < second; j++) target[i][j] = source[i][j];
}

void print(double* arr, int size) {
    for (int i = 0; i < size; i++) printf(" %lf", arr[i]);
    printf("\n");
}