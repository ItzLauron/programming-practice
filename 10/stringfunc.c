#include <wchar.h>

int isLetter(wchar_t ch) {
    if ((ch >= L'A' && ch <= L'Z') || (ch >= L'a' && ch <= L'z') ||
        (ch >= L'А' && ch <= L'Я') || (ch >= L'а' && ch <= L'я')) return 1;
    return 0;
}

// Подсчитывает сколько и каких символов есть в тексте.
void count(void) {
    int index = 0;
    wchar_t indexes[1000];
    int count[1114112];
    int shown[1114112];

    wchar_t ch;
    while ((ch = getwchar()) != WEOF && index < 1000) if (!(ch == L'\n' || ch == L'\t' || ch == L' ') && ch < 1114112) {
        indexes[index++] = ch;
        count[ch]++;
    }

    wprintf(L"%ls %ls\n", L"Символ", L"Количество");

    for (int i = 0; i < index; i++) {
        wchar_t c = indexes[i];
        if (!shown[c]) {
            shown[c] = 1;
            wprintf(L"%-6lc %d\n", c, count[c]);
        }
    }
}

// Подсчитывает количество букв в каждом втором слове.
void countLettersInEvenWord(void) {
    int countWord = 0;
    int countLetter = 0;

    while (1) {
        wchar_t ch = getwchar();

        if (isLetter(ch)) countLetter++;
        else {
            if (countLetter > 0) {
                if (++countWord % 2 == 0)
                    wprintf(L"Количество букв в %d слове: %d\n", countWord, countLetter);
                countLetter = 0;
            }

            if (ch == WEOF) return;
        }
    }
}

// Подсчитывает, сколько слов имеют указанную пользователем длину.
void countWordsInNeedLen(void) {
    int needLen;
    if (!wscanf(L"%d", &needLen) || needLen <= 0) {
        wprintf(L"Не корректное число!\n");
        return;
    }

    int countWord = 0;
    int countLetter = 0;

    while (1) {
        wchar_t ch = getwchar();

        if (isLetter(ch)) countLetter++;
        else {
            if (countLetter == needLen) countWord++;
            countLetter = 0;

            if (ch == WEOF) break;
        }
    }
    wprintf(L"Количество слов которые имеют указанную длину (%d): %d\n", needLen, countWord);
}

// Делит слово на два и оставляет большую часть.
void divideWords(void) {
    int index = 0;
    wchar_t word[12];

    wprintf(L"Поделённые слова на половину:\n");

    int needToPrint = 1;
    while (1) {
        wchar_t ch = getwchar();

        if (isLetter(ch)) {
            if (index < 12) word[index++] = ch;
            else needToPrint = 0;
        } else {
            if (index > 0 && needToPrint) {
                for (int i = 0; i < (index+1)/2; i++) putwchar(word[i]);
                putwchar(L'\n');
            }

            if (ch == WEOF) return;

            needToPrint = 1;
            index = 0;
        }
    }
}