#include <stdio.h>
#include <string.h>

int main() {
    char firstName[70];
    printf("Введите имя: ");
    scanf("%s", &firstName);
    printf("\"%s\"\n", firstName);
    printf("\"%20s\"\n", firstName);
    printf("\"%-20s\"\n", firstName);
    printf("%*s\n", strlen(firstName) + 3, firstName);
    return 0;
}
