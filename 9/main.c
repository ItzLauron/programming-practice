#include <stdio.h>
#include "matrixfunc.h"

void printMenu(void);
_Bool getCharAndCheck(char *ch);
void executeFunctionByChar(int *arr, int size, char ch);

int main(void) {
    int arr[COL][ROW];
    char ch;

    printMenu();
    while (getCharAndCheck(&ch)) {
        case 'a':
            setArr(arr, size);
            break;

        case 'b':
            printArr(arr, size);
            break;

        case 'c':
            indexOfLastPositiveNum(arr, size);
            break;

        case 'd':
           break;

        default:
            printf("\n");
    }

    printf("Программа завершена!\n");
    return 0;
}

void printMenu(void) {
    printf("Меню программы (команды):\n");
    printf("a. Ввод по диагонали с верхнего левого угла.\n");
    printf("b. Представление массива.\n");
    printf("c. Определение двумерных индексов элементов значения которых ниже заданного k; в строках с m по l.\n");
    printf("d. Определить сумму всех не четных столбцов матрицы.\n");
    printf("e. Выход.\n\n");
}

_Bool getCharAndCheck(char *ch) {
    printf("Введите команду: ");
    char c = getchar();
    *ch = c;
    clearBuffer();
    return c != EOF && c != 'e';
}