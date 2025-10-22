#include <stdio.h>

int main() {
    int arr[8];
    for (int i = 0; i < 8; i++) {
        int l = 1;
        for (int j = 0; j < i; j++) l *= 2;
        arr[i] = l;
    }

    int i = 0;
    do {
        printf("%d ", arr[i++]);
    } while (i < 8);
    printf("\n");

    return 0;
}
