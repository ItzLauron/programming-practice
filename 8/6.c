#include <stdio.h>

void reverseArr(double arr[], int size);
void print(double* arr, int size);

int main(void) {
    double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(arr) / sizeof(double);

    printf("Массив:");
    print(arr, size);

    reverseArr(arr, size);
    printf("Развёрнутый массив:");
    print(arr, size);

    return 0;
}

void reverseArr(double* arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        double val = arr[start];
        arr[start++] = arr[end];
        arr[end--] = val;
    }
}

void print(double* arr, int size) {
    for (int i = 0; i < size; i++) printf(" %lf", arr[i]);
    printf("\n");
}