#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("CHAR_MAX + 1: %d\n", (char) (CHAR_MAX + 1));
    printf("SHRT_MAX + 1: %hd\n", SHRT_MAX + 1);
    printf("INT_MAX + 1: %d\n", INT_MAX + 1);
    printf("LONG_MAX + 1: %ld\n", LONG_MAX + 1);
    printf("LLONG_MAX + 1: %lld\n", LLONG_MAX + 1);
    printf("UCHAR_MAX + 1: %u\n", (unsigned char)(UCHAR_MAX + 1));
    printf("USHRT_MAX + 1: %hu\n", USHRT_MAX + 1);
    printf("UINT_MAX + 1: %u\n", UINT_MAX + 1);
    printf("ULONG_MAX + 1: %lu\n", ULONG_MAX + 1);
    printf("ULLONG_MAX + 1: %llu\n", ULLONG_MAX + 1);
    printf("FLT_MAX * 100: %e\n", FLT_MAX * 100);
    printf("DBL_MAX * 100: %f\n", DBL_MAX * 100);
    printf("LDBL_MAX * 100: %Le\n", LDBL_MAX * 100);
    //Error pointing
    float a = 3676432.35676656f;
    printf("a: %f\n", a);
    a /= 2345.77f;
    printf("a /= 2345.77: %f\n", a);
    a *= 2345.77f;
    printf("a *= 2345.77: %f\n", a);
    return 0;
}
