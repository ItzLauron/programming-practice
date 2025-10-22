#include <stdio.h>

int main() {
    int friends = 5;
    int weeks = 1;

    while (friends <= 150) {
        friends -= weeks;
        friends *= 2;
        printf("В конце %d недели у профессора Робинса %d друзей\n", weeks, friends);
        weeks++;
    }

    return 0;
}