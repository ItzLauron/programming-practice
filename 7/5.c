#include <stdio.h>

int main(void) {
    int guess = 0;
    printf("Выберите целое число в интервале от 1 до 100. Я попробую угадать его. Нажмите клавишу у, если моя догадка верна и клавишу n в противном случае.\n");
    int start = 0, end = 100;
    while (start < end) {
        guess = (start + end) / 2;
        printf("Ваше число больше %d?\n", guess);
        switch (getchar()) {
            case 'n':
                end = guess;
                break;
            case 'y':
                start = guess + 1;
                break;
            default:
                printf("Вы нажали на не верную букву!");
                return 0;
        }
        while (getchar() != '\n') {}
    }
    printf("Значит ваше число %d!\n", guess);
    return 0;
}