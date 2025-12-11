#include "structfunc.h"

#include <wchar.h>

void printRabotnik(const struct Rabotnik rabotnik) {
    wprintf(L"Имя: %ls\n", rabotnik.name);
    wprintf(L"Должность: %ls\n", rabotnik.position);
    wprintf(L"Зарплата: %lf\n", rabotnik.salary);
    wprintf(L"Стаж: %d\n", rabotnik.experience);
}