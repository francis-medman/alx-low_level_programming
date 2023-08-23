#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char *temp = dest;

    /* Find the end of dest */
    while (*dest)
        dest++;

    /* Append at most n characters from src */
    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return temp;
}
