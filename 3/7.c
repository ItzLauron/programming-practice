#include <float.h>
#include <stdio.h>

int main() {
    double first = 1.0/3.0;
    float last = 1.0f/3.0f;
    printf("1.0/3.0 double: %.4lf %.12lf %.16lf\n", first, first, first);
    printf("1.0/3.0 float: %.4f %.12f %.16f\n", last, last, last);
    printf("FLT_DIG: %d DBL_DIG: %d\n", FLT_DIG, DBL_DIG);
    printf("1.0/0.3 float: %.16f\n", 1.0f/0.3f);
    printf("1.0/0.3 double: %.16lf\n", 1.0/0.3);
    return 0;
}