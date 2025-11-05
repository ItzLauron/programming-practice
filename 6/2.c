#include <locale.h>
#include <wchar.h>

int main(void) {
    setlocale(LC_ALL, "");
    int count = 0;
    wchar_t ch;

    while ((ch = getwchar()) != L'#') {
        if (ch != L'\n') {
            wprintf(L"%lc-%d ", ch, ch);
            if (++count % 8 == 0) putwchar('\n');
        }
    }

    return 0;
}