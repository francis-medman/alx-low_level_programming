#include "main.h"

char *rot13(char *str)
{
    char *input = str;
    char *output = str;
    int i;

    while (*input)
    {
        if ((*input >= 'a' && *input <= 'z') || (*input >= 'A' && *input <= 'Z'))
        {
            for (i = 0; i < 13; i++)
            {
                if ((*input == 'z') || (*input == 'Z'))
                {
                    *output = *input - 25;
                }
                else
                {
                    *output = *input + 1;
                }
                input++;
                output++;
            }
            input--;
            output--;
        }
        else
        {
            *output = *input;
        }

        input++;
        output++;
    }

    *output = '\0';

    return str;
}
