#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int word_count(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, len, word_count;
    int in_word = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = word_count(str);

    if (word_count == 0)
        return (NULL);

    words = malloc((word_count + 1) * sizeof(char *));
    
    if (words == NULL)
        return (NULL);

    for (i = 0; i < word_count; i++)
    {
        while (*str == ' ' || *str == '\t' || *str == '\n')
            str++;

        len = 0;
        while (str[len] != ' ' && str[len] != '\t' && str[len] != '\n' && str[len] != '\0')
            len++;

        words[i] = malloc((len + 1) * sizeof(char));

        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return (NULL);
        }

        for (j = 0; j < len; j++)
            words[i][j] = *str++;

        words[i][j] = '\0';
    }

    words[i] = NULL;

    return (words);
}
