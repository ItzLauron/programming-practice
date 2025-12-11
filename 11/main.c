#include <locale.h>
#include <wchar.h>
#include "structfunc.h"

int clearBuffer(void) {
    int c;
    while ((c = getwchar()) != '\n') if (c == WEOF) return 1;
    return 0;
}

int main(void) {
    setlocale(LC_ALL, "");
    struct Rabotnik rabotnik;
    if (!wscanf(L"%19ls", rabotnik.name)) {
        wprintf(L"Не вверно введённое имя!\n");
        return 0;
    }
    if (!wscanf(L"%19ls", rabotnik.position)) {
        wprintf(L"Не вверно введённая должность!\n");
        return 0;
    }
    if (!wscanf(L"%lf", &rabotnik.salary)) {
        wprintf(L"Не вверно введённая зарплата!\n");
        return 0;
    }
    if (!wscanf(L"%d", &rabotnik.experience)) {
        wprintf(L"Не вверно введённый стаж работы!\n");
        return 0;
    }
    printRabotnik(rabotnik);
}