#include <stdio.h>

int main() {
    double daphne, deirdre = daphne = 100.0;
    int years = 0;

    for (; deirdre <= daphne; years++) {
        daphne += 100.0 * 0.10;
        deirdre += deirdre * 0.05;
    }

    printf("Через %d лет Дейдра превзойдет Дафну. Счёт Дафны: %lf, счёт Дейдры: %lf\n", years, daphne, deirdre);

    return 0;
}