#include <stdio.h>

void print(int arr[][5], int first);
void doubleArr(int arr[][5], int first);

int main(void) {
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    int first = 3;

    printf("Массив:\n");
    print(arr, first);

    doubleArr(arr, first);

    printf("\nМассив после удвоения значений:\n");
    print(arr, first);

    return 0;
}

void print(int arr[][5], int first) {
    for (int i = 0; i < first; i++) {
        for (int j = 0; j < 5; j++) printf(" %d", arr[i][j]);
        printf("\n");
    }
}

void doubleArr(int arr[][5], int first) {
    for (int i = 0; i < first; i++)
        for (int j = 0; j < 5; j++) arr[i][j] *= 2;
}