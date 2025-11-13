#include <stdio.h>

int max(int* arr, int len);

int main(void) {
    int arr[] = {4, 45};
    printf("max: %d\n", max(arr, 2));
    return 0;
}

int max(int* arr, int len) {
    int max = *arr;
    for (int i = 0; i < len; i++) {
        int val = *(arr + i);
        if (val > max) max = val;
    }
    return max;
}