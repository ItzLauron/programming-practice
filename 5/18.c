#include <stdio.h>

int main() {
    int friends = 5;
    int weeks = 0;

    while (friends <= 150) {
        friends -= weeks;
        friends *= 2;
        printf("В конце %d недели у профессора Робинса %d друзей\n", ++weeks, friends);
    }

    return 0;
}