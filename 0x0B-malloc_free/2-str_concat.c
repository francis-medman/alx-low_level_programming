#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated string containing s1 followed by s2,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat_str;
    int len_s1 = 0, len_s2 = 0;
    int i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len_s1] != '\0')
        len_s1++;
    while (s2[len_s2] != '\0')
        len_s2++;

    concat_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

    if (concat_str == NULL)
        return (NULL);

    for (i = 0; i < len_s1; i++)
        concat_str[i] = s1[i];

    for (j = 0; j < len_s2; j++)
        concat_str[i + j] = s2[j];

    concat_str[i + j] = '\0';

    return (concat_str);
}
