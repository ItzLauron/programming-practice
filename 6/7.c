#include <stdio.h>

int main() {
    printf("Введите количетсво часов, отработанных за неделю: ");
    int hours;
    scanf("%d", &hours);
    float general = 10.0 / hours;
    printf("Значение общей суммы начислений: %f\n", general);
    if (hours > 40) {
        general *= 1.5;
        printf("Из");
    }
    return 0;
}