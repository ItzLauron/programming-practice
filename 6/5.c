#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    wchar_t ch;
    int count = 0;
    while ((ch = getwchar()) != L'#') {
        switch (ch) {
            case '.':
                putwchar('!');
                count++;
                break;
            case '!':
                wprintf(L"!!");
                count++;
                break;
            default: putwchar(ch);
        }
    }

    wprintf(L"Количество произведённых замен: %d\n", count);

    return 0;
}