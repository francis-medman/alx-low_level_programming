#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: The argument count.
 * @av: An array of strings containing arguments.
 *
 * Return: A pointer to a newly allocated string containing all arguments
 * separated by newlines, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, len, total_len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate the total length of all arguments and newlines */
    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len] != '\0')
        {
            len++;
            total_len++;
        }
        total_len++;
    }

    /* Allocate memory for the concatenated string */
    str = malloc(sizeof(char) * (total_len + 1)); /* +1 for null terminator */

    if (str == NULL)
        return (NULL);

    /* Copy arguments and add newlines */
    j = 0;
    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len] != '\0')
        {
            str[j++] = av[i][len++];
        }
        str[j++] = '\n';
    }

    str[j] = '\0';

    return (str);
}
