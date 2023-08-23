#include "main.h"
#include <stdbool.h>

bool is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;
    
    for (i = 0; separators[i]; i++)
    {
        if (separators[i] == c)
        {
            return true;
        }
    }
    return false;
}

char *cap_string(char *str)
{
    char *temp = str;
    bool new_word = true;

    while (*str)
    {
        if (is_separator(*str))
        {
            new_word = true;
        }
        else if (new_word && *str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
            new_word = false;
        }
        else
        {
            new_word = false;
        }

        str++;
    }

    return temp;
}
