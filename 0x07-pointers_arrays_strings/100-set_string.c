#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to the pointer that needs to be modified
 * @to: String to which the pointer should point
 */
void set_string(char **s, char *to)
{
    *s = to;
}
