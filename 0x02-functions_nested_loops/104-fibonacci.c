#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, nextFib;
    int count;
    unsigned long sum = 2; // Start with sum as 2 (since the sequence starts with 1 and 2)

    printf("%lu, %lu", fib1, fib2);

    for (count = 2; count < 98; count++)
    {
        nextFib = fib1 + fib2;
        if (nextFib % 2 == 0) // Check if the nextFib is even
            sum += nextFib;   // Add even Fibonacci numbers to the sum
        printf(", %lu", nextFib);
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\nSum of even-valued terms: %lu\n", sum);

    return (0);
}
