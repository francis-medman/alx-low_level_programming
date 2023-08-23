#include <stdio.h>
#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result buffer
 * @size_r: size of the buffer
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int sum = 0;
    int index_n1 = 0;
    int index_n2 = 0;
    int index_r = 0;

    while (n1[index_n1] != '\0')
        index_n1++;
    while (n2[index_n2] != '\0')
        index_n2++;

    index_n1--;
    index_n2--;
    size_r--;

    while (index_n1 >= 0 || index_n2 >= 0 || carry > 0)
    {
        int num1 = index_n1 >= 0 ? n1[index_n1] - '0' : 0;
        int num2 = index_n2 >= 0 ? n2[index_n2] - '0' : 0;

        sum = num1 + num2 + carry;
        carry = sum / 10;
        sum %= 10;

        if (size_r <= 0)
            return (0);

        r[index_r++] = sum + '0';

        index_n1--;
        index_n2--;
        size_r--;
    }

    r[index_r] = '\0';

    if (index_r > size_r)
        return (0);

    for (index_r = 0; index_r < (index_r / 2); index_r++)
    {
        char temp = r[index_r];
        r[index_r] = r[index_n1 - index_r];
        r[index_n1 - index_r] = temp;
    }

    return (r);
}
