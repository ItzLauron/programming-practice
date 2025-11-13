#include <stdio.h>

void copyArr(double* target, double* source, int size);
void print(double* arr, int size);

int main(void) {
    int first = 3;
    int second = 4;

    double arr[3][4] = {
        {1.1, 2.2, 3.3, 4.4},
        {5.5, 6.6, 7.7, 8.8},
        {9.9, 10.10, 11.11, 12.12}
    };

    printf("Массив:\n");
    for (int i = 0; i < first; i++) print(arr[i], second);

    double newArr[3][4];
    for (int i = 0; i < first; i++) copyArr(newArr[i], arr[i], second);

    printf("\nСкопированный массив:\n");
    for (int i = 0; i < first; i++) print(newArr[i], second);

    return 0;
}

void copyArr(double* target, double* source, int size) {
    for (int i = 0; i < size; i++) target[i] = source[i];
}

void print(double* arr, int size) {
    for (int i = 0; i < size; i++) printf(" %lf", arr[i]);
    printf("\n");
}