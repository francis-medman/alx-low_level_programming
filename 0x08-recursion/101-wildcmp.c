#include "main.h"
#include <string.h>

/**
  * wildcmp - Compares two strings, considering * as a wildcard.
  * @s1: The first string to be compared.
  * @s2: The second string to be compared.
  *
  * Return: 1 if the strings can be considered identical, 0 otherwise.
  */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return 1;
		}
		else if (*(s1 + 1) == '\0')
		{
			return wildcmp(s1, s2 + 1);
		}
		else
		{
			return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
		}
	}
	else if (*s1 != *s2)
	{
		return 0;
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return 1;
	}
	
	return wildcmp(s1 + 1, s2 + 1);
}
