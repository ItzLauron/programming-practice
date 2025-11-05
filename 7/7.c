#include <stdio.h>

int main(void) {
    printf("Выберите тарифную ставку (a - $8.75/ч, b - $9.33/ч, c - $10/ч, d - $11.2/ч, q - выход): ");
    double tariffValue = 0;
    switch (getchar()) {
        case 'a':
            tariffValue = 8.75;
            break;
        case 'b':
            tariffValue = 9.33;
            break;
        case 'c':
            tariffValue = 10;
            break;
        case 'd':
            tariffValue = 11.2;
            break;
        default:
            printf("Выход / Не корректное значение тарифной ставки\n");
            return 0;
    }

    printf("Введите количетсво часов, отработанных за неделю: ");
    double hours;
    scanf("%lf", &hours);
    if (hours <= 0) {
        printf("Не корректное количество часов");
        return 0;
    }
    double general = hours * tariffValue;
    if (hours > 40) general *= 1.5;

    double generalCopy = general;
    double nalog = 0;
    nalog += ((generalCopy > 300) ? 300 : generalCopy) * 0.15;
    generalCopy -= 300;
    if (generalCopy > 0) nalog += ((generalCopy > 150) ? 150 : generalCopy) * 0.20;
    generalCopy -= 150;
    if (generalCopy > 0) nalog += generalCopy * 0.25;

    printf("Ставка без учёта налогов: %.3lf, налоги: %.3lf, ставка с учётом налогов: %.3lf", general, nalog, general - nalog);

    return 0;
}
