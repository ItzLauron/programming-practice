#include <stdio.h>
#include <string.h>

int main() {
    printf("Введите своё имя и фамилию: ");
    char firstName[70];
    char lastName[70];
    scanf("%s%s", &firstName, &lastName);
    printf("%s %s\n", firstName, lastName);
    int lenFirstName = strlen(firstName);
    int lenLastName = strlen(lastName);
    printf("%*d %*d\n", lenFirstName, lenFirstName, lenLastName, lenLastName);
    printf("%s %s\n", firstName, lastName);
    printf("%-*d %-*d\n", lenFirstName, lenFirstName, lenLastName, lenLastName);
    return 0;
}
