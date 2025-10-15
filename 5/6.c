#include <stdio.h>
int main (void) {
    int count, sum;
    count = 0;
    sum = 0;
    printf("До какого числа n вам нужно высчитать сумму перых чисел?: ");
    int value;
    scanf("%d", &value);
    while (count++ < value)
        sum = (sum + count) * (sum + count);
    printf("sum = %d\n", sum);
    return 0;
}