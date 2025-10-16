#include <stdio.h>

const double MILE = 1.609;
const double GALLON = 3.785;

int main() {
    printf("Введите количество преодолённых миль и количество галлонов израсходного бензина:");
    double miles, gallons;
    scanf("%lf%lf", &miles, &gallons);
    printf("Количество миль пройденных на одном галлоне: %.1lf\n", miles / gallons);
    printf("Литров на 100 км: %.1lf\n", (GALLON * gallons) / ((MILE * miles) / 100));
    return 0;
}