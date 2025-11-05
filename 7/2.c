#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    int count = 0;
    wchar_t ch;
    while ((ch = getwchar()) != WEOF) {
        if (ch < L' ') {
            switch (ch) {
                case '\n':
                    wprintf(L"\\n");
                    count = -2;
                    break;
                case '\t':
                    wprintf(L"\\t");
                    break;
                default:
                    wprintf(L"^%lc", ch + 64);
            }
        } else putwchar(ch);
        wprintf(L" - %d ", ch);
        if (++count % 10 == 0) wprintf(L"\n");
    }
    return 0;
}