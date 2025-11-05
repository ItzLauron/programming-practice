#include <wchar.h>
#include <locale.h>
#include <wctype.h>

int wordCount = 0, wordLength = 0, wordLengthSum = 0;

void check(void);

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t ch;
    wprintf(L"Вводите слова (# - стоп программы): ");

    while ((ch = getwchar()) != L'#') {
        if (iswalpha(ch)) wordLength++;
        else check();
    }
    check();
    wprintf(L"Среднее количество букв в словах: %d\n", wordCount > 0 ? wordLengthSum / wordCount : 0);
    return 0;
}

void check(void) {
    if (wordLength != 0) {
        wordCount++;
        wordLengthSum += wordLength;
        wordLength = 0;
    }
}