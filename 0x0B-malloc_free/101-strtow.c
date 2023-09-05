#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            /* This character is a space, tab, or newline. */
        }
        else
        {
            /* This character is part of a word. */
            count++;
            while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
                str++;
            str--; /* Move back to the last character of the word. */
        }
        str++;
    }

    return count;
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
    int i, j, len, num_words;

    if (str == NULL || *str == '\0')
        return NULL;

    num_words = count_words(str);

    if (num_words == 0)
        return NULL;

    words = malloc((num_words + 1) * sizeof(char *));

    if (words == NULL)
        return NULL;

    for (i = 0; i < num_words; i++)
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
            return NULL;
        }

        for (j = 0; j < len; j++)
            words[i][j] = *str++;

        words[i][j] = '\0';
    }

    words[i] = NULL;

    return words;
}
