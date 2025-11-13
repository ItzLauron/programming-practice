#include <stdio.h>

void copyArr(double* target, double* source, int size);
void copyPtr(double* target, double* source, int size);
void copuPtrs(double* target, double* source, double* end);
void print(double* arr, int size);

int main(void) {
    double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    double target1[5];
    double target2[5];
    double target3[5];

    printf("target1(copyArr):");
    copyArr(target1, source, 5);
    print(target1, 5);

    printf("target2(copyPtr):");
    copyPtr(target2, source, 5);
    print(target2, 5);

    printf("target3(copuPtrs):");
    copuPtrs(target3, source, source + 5);
    print(target3, 5);

    return 0;
}

void copyArr(double* target, double* source, int size) {
    for (int i = 0; i < size; i++) {
        target[i] = source[i];
    }
}
void copyPtr(double* target, double* source, int size) {
    for (int i = 0; i < size; i++) {
        *(target+i) = *(source+i);
    }
}
void copuPtrs(double* target, double* source, double* end) {
    while (source < end) {
        *(target++) = *(source++);
    }
}

void print(double* arr, int size) {
    for (int i = 0; i < size; i++) printf(" %lf", arr[i]);
    printf("\n");
}