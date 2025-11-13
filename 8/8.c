#include <stdio.h>

void copyArr(double* target, double* source, int size);
void print(double* arr, int size);

int main(void) {
    double arr[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};

    printf("Массив:");
    print(arr, 7);

    double newArr[3];
    copyArr(newArr, &arr[2], 3);

    printf("Скопированный массив:");
    print(newArr, 3);

    return 0;
}

void copyArr(double* target, double* source, int size) {
    for (int i = 0; i < size; i++) target[i] = source[i];
}

void print(double* arr, int size) {
    for (int i = 0; i < size; i++) printf(" %lf", arr[i]);
    printf("\n");
}