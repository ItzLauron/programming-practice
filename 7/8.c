#include <locale.h>
#include <wchar.h>

void print(void);
wchar_t getChar(wchar_t ch);
double getValue(wchar_t ch, double first, double second);

int main(void) {
    setlocale(LC_ALL, "");
    while (1) {
        wprintf(L"Выберите желаемую операцию (с - сложение, в - вычитание, у - умножение, д - деление, з - завершение): ");
        wchar_t ch = getwchar();
        if (!(ch == L'с' || ch == L'в' || ch == L'у' || ch == L'д')) {
            wprintf(L"Завершение / Не корректно выбранная операция\n");
            return 0;;
        }
        double first = 0, second = 0;
        wprintf(L"Введите первое число: ");
        while (wscanf(L"%lf", &first) != 1) {
            while (getwchar() != '\n') {}
            print();
        }
        wprintf(L"Введите второе число: ");
        while (wscanf(L"%lf", &second) != 1) {
            while (getwchar() != '\n') {}
            print();
        }
        while (getwchar() != '\n') {}
        if (ch != L'д' && second != 0) {
            wprintf(L"%lf %lc %lf = %lf\n", first, getChar(ch), second, getValue(ch, first, second));
        } else wprintf(L"Деление на 0 запрещено!\n");
    }
}

void print(void) {
    wprintf(L"Введите число, такое как 2.5, -1.78Е8 или 3: ");
}

wchar_t getChar(wchar_t ch) {
    switch (ch) {
        case L'с': return L'+';
        case L'в': return L'-';
        case L'у': return L'*';
        case L'д': return L'/';
    }
    return ' ';
}


double getValue(wchar_t ch, double first, double second) {
    switch (ch) {
        case L'с': return first + second;
        case L'в': return first - second;
        case L'у': return first * second;
        case L'д': return first / second;
    }
    return 0;
}
