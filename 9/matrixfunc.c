#include <stdio.h>

void diagonalScan(int *arr, int rows, int cols) {
    for (int i = 0; i < rows + cols - 1; i++) for (int j = 0; j <= i; j++) {
        int l = i - j;
        if (j < rows && l < cols) scanf("%d", arr + j * cols + l);
    }
}

void findIndexesLowerNum(int *arr, int rows, int cols) {
    int m, l, k;
    printf("Введите m, l и k: ");
    scanf("%d %d %d", &m, &l, &k);
    for (int i = 0; i < m && i < rows; i++) for (int j = 0; j < l && j < cols; j++) {
        int val = *(arr + i * cols + j);
        if (val < k) printf("%d, %d, %d\n", i, j, val);
    }
}



int main(void) {
    int test[3][3];
    diagonalScan(*test, 3, 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%d ", test[i][j]);
        printf("\n");
    }
    findIndexesLowerNum(*test, 3, 3);
}