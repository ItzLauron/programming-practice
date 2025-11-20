#include <limits.h>
#include <stdio.h>

_Bool clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n') if (c == EOF) return true;
	return false;
}

_Bool scanNumWithCheck(int *num) {
    if (!scanf("%d", num)) {
        printf("Не корректное число!\n");
        clearBuffer();
        return true;
    }

    return clearBuffer();
}

void setSizeArr(int *size) {
    printf("Введите размер массива: ");
    int tempSize;
    if (scanNumWithCheck(&tempSize) || tempSize < 1 || tempSize > 500) return;
    *size = tempSize;
    printf("Готово! Рекомендуется задать значения чисел в массиве (команда b)\n");
}

void setArr(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Введите число для индекса %d: ", i);
        if (scanNumWithCheck(arr + i)) break;
    }
}

void printArr(int *arr, int size) {\
    printf("Представление массива:\n");
    for (int i = 0; i < size; i++) {
        int *ptr = arr + i;
        printf(
            "Индекс: %d, значение: %d, аддрес: %p\n",
            i,
            *ptr,
            ptr
        );
    }
}

void indexOfLastPositiveNum(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) if (*(arr + i) > 0) {
        printf("Индекс последнего положительного элемента: %d\n", i);
        break;
    }
}

void countLargerThanNum(int *arr, int size) {
    int num;
    printf("Введите k: ");
    if (scanNumWithCheck(&num)) return;

    int count = 0;
    for (int i = 0; i < size; i++) if (*(arr + i) > num) count++;

    printf("Количество чисел, больших num (%d): %d\n", num, count);
}

void foundIndexesOfNumsLargerThanAVG(int *arr, int size) {
    long long sum = 0;
    for (int i = 0; i < size; i++) {
        int num = *(arr + i);
        if (sum > LLONG_MAX - num) {
            printf("Переполнение!\n");
            return;
        }
        sum += num;
    }
    int avg = sum / size;
    for (int i = 0; i < size; i++) {
        int num = *(arr + i);
        if (num > avg) printf(
            "Среднее значение: %d, число большее среднего значения: %d, индекс: %d\n",
            avg,
            num,
            i
        );
    }
}