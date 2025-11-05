#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    FILE *file = fopen("test.txt", "r");
    int count = 0;
    while (fgetwc(file) != WEOF) count++;
    fclose(file);
    printf("%d\n", count);
    return 0;
}