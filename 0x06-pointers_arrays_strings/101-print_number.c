#include "main.h"

void print_number(int n)
{
    int divisor = 1;
    int is_negative = 0;

    if (n < 0)
    {
        is_negative = 1;
        n = -n;
    }

    while (n / divisor >= 10)
    {
        divisor *= 10;
    }

    if (is_negative)
    {
        _putchar('-');
    }

    while (divisor > 0)
    {
        _putchar('0' + (n / divisor));
        n %= divisor;
        divisor /= 10;
    }
}
