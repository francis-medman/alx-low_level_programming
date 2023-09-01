#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    /*Skip leading whitespace characters*/
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
           s[i] == '\r' || s[i] == '\v' || s[i] == '\f')
    {
        i++;
    }

    /*Check for sign*/
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    /* Convert string to integer*/
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}
