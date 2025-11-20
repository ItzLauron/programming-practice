#include <stdio.h>
#include "myarrfunc.h"

void printMenu(void);
_Bool getCharAndCheck(char *ch);
void executeFunctionByChar(int *arr, int size, char ch);

int main(void) {
    int arr[500];
    int size = 0;
    char ch;

    printMenu();
    while (getCharAndCheck(&ch)) {
        if (ch == 'a') setSizeArr(&size);
        else if (ch >= 'b' && ch <= 'f') {
            if (size == 0) printf("Размер массива равен 0!\n");
            else executeFunctionByChar(arr, size, ch);
        }
        else printf("Не верная буква!\n");
    }

    printf("Программа завершена!\n");
    return 0;
}

void printMenu(void) {
    printf("Меню программы (команды):\n");
    printf("a. Задать размер массива.\n");
    printf("b. Заполнить массив\n");
    printf("c. Представление массива (значения, адреса)\n");
    printf("d. Поиск индекса последнего положительного элемента массива\n");
    printf("e. Определить количество элементов массива по значению выше введенного числа\n");
    printf("f. Вычислить индексы элементов значение которых выше среднего значения массива\n");
    printf("g. Выход\n\n");
}

_Bool getCharAndCheck(char *ch) {
    printf("Введите команду: ");
    char c = getchar();
    *ch = c;
    clearBuffer();
    return c != EOF && c != 'g';
}

void executeFunctionByChar(int *arr, int size, char ch) {
    switch (ch) {
        case 'b':
            setArr(arr, size);
            break;

        case 'c':
            printArr(arr, size);
            break;

        case 'd':
            indexOfLastPositiveNum(arr, size);
            break;

        case 'e':
            countLargerThanNum(arr, size);
            break;

        case 'f':
            foundIndexesOfNumsLargerThanAVG(arr, size);
    }
}