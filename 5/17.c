#include <stdio.h>

int main() {
    double schet = 1000000;
    int years = 0;

    for (; schet > 0; years++) {
        schet -= 100000;
        schet += schet * 0.08;
    }

    printf("Через %d лет у Чаки Лаки не останется денег", years);

    return 0;
}