#include <float.h>
#include <stdio.h>

int main() {
    double first = 1.0/3.0;
    float last = 1.0/3.0;
    printf("%.4lf %.12lf %.16lf\n", first, first, first);
    printf("%.4f %.12f %.16f\n", last, last, last);
    printf("%f %lf\n", FLT_DIG, DBL_DIG);
    printf("%f\n", 1.0/0.3);
    return 0;
}