#include "main.h"

char *string_toupper(char *str)
{
    char *temp = str;

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
        }
        str++;
    }

    return temp;
}

