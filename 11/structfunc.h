#include <wchar.h>

struct Rabotnik {
    wchar_t name[20];
    wchar_t position[20];
    double salary;
    int experience;
};

void printRabotnik(const struct Rabotnik rabotnik);