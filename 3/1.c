#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("MAX_INT: %d, MAX_FLOAT: %f]\n", INT_MAX, FLT_MAX);
    printf("MAX_INT + 1: %d, MAX_FLOAT * 100: %f]\n", INT_MAX + 1, FLT_MAX * 100);
    float a = 3676432.35676656f;
    printf("a: %f\n", a);
    a /= 2345.77f;
    printf("a /= 2345.77: %f\n", a);
    a *= 2345.77f;
    printf("a *= 2345.77: %f\n", a);
    return 0;
}
