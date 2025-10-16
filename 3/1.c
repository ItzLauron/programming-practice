#include <stdio.h>

int main() {
    printf("Введите своё имя и фамилию: ");
    char firstName[70];
    char lastName[70];
    scanf("%s%s", &firstName, &lastName);
    printf("Фамилия: %s, Имя: %s\n", lastName, firstName);
    return 0;
}
