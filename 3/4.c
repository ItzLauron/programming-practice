#include <stdio.h>

int main() {
    printf("Введите имя и рост (в сантиметрах):");
    char firstName[20];
    float height;
    scanf("%s%f", &firstName, &height);
    printf("%s, ваш рост составляет %f метров\n", firstName, height/100);
    return 0;
}
