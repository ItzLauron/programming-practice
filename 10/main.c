#include <locale.h>
#include <wchar.h>
#include "stringfunc.h"

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");

    if (argc != 2) {
        wprintf(L"Требуется номер функции (1-4) в аргументах запуска программы!\n");
        return 0;
    }

    switch (argv[1][0]) {
        case L'1':
            count();
            break;
        case L'2':
            countLettersInEvenWord();
            break;
        case L'3':
            countWordsInNeedLen();
            break;
        case L'4':
            divideWords();
            break;
        default:
            wprintf(L"Не верный номер функции!\n");
    }
    return 0;
}