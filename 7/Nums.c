#include <stdio.h>

const char count_z = 11;

int main(void) {
    char id = 14 % 10 + 1;
    int z1 = 1 + (count_z % id);
    int z2 = 4 + (count_z % id);
    int z3 = (7 + (count_z % id)) % (count_z + 1);
    printf("%d %d %d\n", z1, z2, z3);
}