#include <stdio.h>

double* max(double* arr, int len);

int main(void) {
    double arr[] = {4.7, 45.7};
    printf("max: %lf\n", *max(arr, 2));
    return 0;
}

double* max(double* arr, int len) {
    double* max = arr;
    for (double* i = arr; i++ < arr + len; i++) if (*i > *max) max = i;
    return max;
}