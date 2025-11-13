#include <stdio.h>

double max(double* arr, int len);

int main(void) {
    double arr[] = {4.7, 45.7};
    printf("diff(max-min): %lf\n", max(arr, 2));
    return 0;
}

double max(double* arr, int len) {
    double max = *arr;
    double min = *arr;
    for (int i = 0; i < len; i++) {
        double val = *(arr + i);
        if (val > max) max = val;
        else if (val < min) min = val;
    }
    return max - min;
}