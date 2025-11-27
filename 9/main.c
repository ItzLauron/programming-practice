#include <stdio.h>
#include "matrixfunc.h"

void printMenu(void);
_Bool getCharAndCheck(char *ch);

int main(void) {
    int arr[COL][ROW];
    char ch;

    printMenu();
    while (getCharAndCheck(&ch)) {
        switch (ch) {
            case 'a':
                diagonalScan(*arr, COL, ROW);
                break;
            case 'b':
                print(*arr, COL, ROW);
                break;
            case 'c':
                findIndexesLowerNum(*arr, COL, ROW);
                break;
            case 'd':
                sumOddCols(*arr, COL, ROW);
                break;
            default:
                printf("Не верная буква!");
                return 0;
        }
    }

    printf("Программа завершена!\n");
    return 0;
}

void printMenu(void) {
    printf("Меню программы (команды):\n");
    printf("a. Ввод по диагонали с верхнего правого угла (вводить матрицу из файла <).\n");
    printf("b. Представление массива (матрица значений).\n");
    printf("c. Определение двумерных индексов элементов значения которых ниже заданного k; в строках с m по l;\n");
    printf("d. Определить сумму всех не четных столбцов матрицы.\n");
    printf("e. Выход\n\n");
}

_Bool getCharAndCheck(char *ch) {
    printf("Введите команду: ");
    char c = getchar();
    *ch = c;
    clearBuffer();
    return c != EOF && c != 'e';
}