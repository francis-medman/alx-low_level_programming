#include "main.h"
#include <string.h>

/**
  * check_palindrome - Helper function to check if a string is a palindrome using recursion.
  * @s: The string to be checked.
  * @start: The starting index of the substring to be checked.
  * @end: The ending index of the substring to be checked.
  *
  * Return: 1 if the substring is a palindrome, 0 otherwise.
  */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return 1;
	}
	else if (s[start] != s[end])
	{
		return 0;
	}
	
	return check_palindrome(s, start + 1, end - 1);
}

/**
  * is_palindrome - Checks if a string is a palindrome.
  * @s: The string to be checked.
  *
  * Return: 1 if s is a palindrome, 0 otherwise.
  */
int is_palindrome(char *s)
{
	int length = strlen(s);
	
	return check_palindrome(s, 0, length - 1);
}
