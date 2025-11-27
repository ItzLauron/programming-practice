#include <limits.h>
#include <stdio.h>

_Bool clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n') if (c == EOF) return true;
    return false;
}

_Bool scanNumWithCheck(int *num) {
    if (!scanf("%d ", num)) {
        *num = 0;
        printf("Не корректное число!\n");
        clearBuffer();
        return true;
    }

    return clearBuffer();
}

void print(int *arr, int rows, int cols) {
    printf("Матрица:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) printf("%d ", *(arr + i * cols + j));
        printf("\n");
    }
}

void diagonalScan(int *arr, int rows, int cols) {
    for (int i = 0; i < rows + cols - 1; i++) for (int j = 0; j <= i; j++) {
        int l = i - j;
        if (j < rows && l < cols && scanNumWithCheck(arr + j * cols + l)) return;
    }
}

void findIndexesLowerNum(int *arr, int rows, int cols) {
    int m;
    printf("Введите требуемое количество строк: ");
    if (scanNumWithCheck(&m)) return;

    int l;
    printf("Введите требуемое количество столбцов: ");
    if (scanNumWithCheck(&l)) return;

    int k;
    printf("Введите число k: ");
    if (scanNumWithCheck(&k)) return;

    for (int i = 0; i < m && i < rows; i++) for (int j = 0; j < l && j < cols; j++) {
        int val = *(arr + i * cols + j);
        if (val < k) printf("arr[%d][%d] = %d\n", i, j, val);
    }
}

void sumOddCols(int *arr, int rows, int cols) {
    long long sum = 0;
    for (int i = 0; i < rows; i++) for (int j = 1; j < cols; j += 2) {
        int val = *(arr + i * cols + j);
        if (sum > LLONG_MAX - val) {
            printf("Переполнение!\n");
            return;
        }
        sum += val;
    }
    printf("Сумма не четных столбцов матрицы: %lld\n", sum);
}