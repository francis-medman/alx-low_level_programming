#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the characters to match
 *
 * Return: Number of bytes in the initial segment of @s that consist only of
 * bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;
    unsigned int i;

    while (*s != '\0')
    {
        found = 0;
        i = 0;

        while (accept[i] != '\0')
        {
            if (*s == accept[i])
            {
                count++;
                found = 1;
                break;
            }
            i++;
        }

        if (!found)
            break;

        s++;
    }

    return count;
}
