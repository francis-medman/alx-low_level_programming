#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
    char *dup_str;
    unsigned int i, len;

    if (str == NULL)
        return (NULL);

    len = 0;
    while (str[len] != '\0')
        len++;

    dup_str = malloc(sizeof(char) * (len + 1));

    if (dup_str == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        dup_str[i] = str[i];

    return (dup_str);
}
