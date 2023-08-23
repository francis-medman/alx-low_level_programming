#include "main.h"

char *leet(char *str)
{
    char leet_conversion[] = "AaEeOoTtLl";
    char leet_digits[] = "4433007711";
    int i, j;

    for (i = 0; str[i]; i++)
    {
        for (j = 0; leet_conversion[j]; j++)
        {
            if (str[i] == leet_conversion[j])
            {
                str[i] = leet_digits[j];
                break;
            }
        }
    }

    return str;
}
