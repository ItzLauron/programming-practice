#include <wchar.h>
#include <locale.h>
#include <wctype.h>

int main(void) {
    setlocale(LC_ALL, "");
    int countUpper = 0, countLower = 0, countOther = 0;
    wchar_t ch;
    while ((ch = getwchar()) != L'#') {
        if (iswupper(ch)) countUpper++;
        else if (iswlower(ch)) countLower++;
        else countOther++;
    }
    wprintf(
        L"Количество прописных букв: %d, количество строчных букв: %d, количество остальных символов: %d\n",
        countUpper,
        countLower,
        countOther
    );
    return 0;
}