#include <stdio.h>


double calculateAverage(double arr[], int size);
double calculateTotalAverage(double arr[][5], int first);
double findMax(double arr[][5], int first);
void get(double arr[][5], int first);
void print(double arr[][5], int first);

int main(void) {
    int first = 3;
    double arr[3][5];

    get(arr, first);
    print(arr, first);

    for (int i = 0; i < first; i++) {
        double avg = calculateAverage(arr[i], 5);
        printf("Среднее для набора %d: %f\n", i + 1, avg);
    }

    double totalAvg = calculateTotalAverage(arr, first);
    printf("Среднее для всех значений: %f\n", totalAvg);

    double max = findMax(arr, first);
    printf("Наибольшее значение: %f\n", max);

    return 0;
}

double calculateAverage(double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum / size;
}

double calculateTotalAverage(double arr[][5], int first) {
    double sum = 0.0;
    int count = 0;
    for (int i = 0; i < first; i++) {
        for (int j = 0; j < 5; j++) {
            sum += arr[i][j];
            count++;
        }
    }
    return sum / count;
}

double findMax(double arr[][5], int first) {
    double max = arr[0][0];
    for (int i = 0; i < first; i++)
        for (int j = 0; j < 5; j++) if (arr[i][j] > max) max = arr[i][j];
    return max;
}

void get(double arr[][5], int first) {
    for (int i = 0; i < first; i++) {
        printf("Введите 5 чисел для набора %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("Число %d: ", j + 1);
            scanf("%lf", &arr[i][j]);
        }
    }
}

void print(double arr[][5], int first) {
    printf("Данные массива:\n");
    for (int i = 0; i < first; i++) {
        for (int j = 0; j < 5; j++) printf(" %f", arr[i][j]);
        printf("\n");
    }
}