#include <stdio.h>

void sumArrays(int* arr1, int* arr2, int* arr3, int size);
void print(int* arr, int size);

int main(void) {
    int arr1[] = {2, 4, 5, 8};
    int arr2[] = {1, 0, 4, 6};
    int size = 4;
    int arr3[size];

    sumArrays(arr1, arr2, arr3, size);

    printf("Массив 1: ");
    print(arr1, size);

    printf("Массив 2: ");
    print(arr2, size);

    printf("Массив 3 (сумма): ");
    print(arr3, size);

    return 0;
}

void sumArrays(int* arr1, int* arr2, int* arr3, int size) {
    for (int i = 0; i < size; i++) arr3[i] = arr1[i] + arr2[i];
}

void print(int* arr, int size) {
    for (int i = 0; i < size; i++) printf(" %d", arr[i]);
    printf("\n");
}