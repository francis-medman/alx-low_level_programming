#include "main.h"

char *_strcat(char *dest, char *src)
{
    char *temp = dest;

    while (*dest)
        dest++;
    
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    
    *dest = '\0';

    return temp;
}
