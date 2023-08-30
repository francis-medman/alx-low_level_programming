#include "main.h"

/**
  * check_sqrt - Helper function to find the natural square root using recursion.
  * @n: The number for which the square root is to be calculated.
  * @guess: The current guess for the square root.
  *
  * Return: The natural square root of n, or -1 if n does not have a natural square root.
  */
int check_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return guess;
	}
	else if (guess * guess > n)
	{
		return -1;
	}

    /* Continue searching with the next guess */
	return check_sqrt(n, guess + 1);
}

/**
  * _sqrt_recursion - Returns the natural square root of a number.
  * @n: The number for which the square root is to be calculated.
  *
  * Return: The natural square root of n, or -1 if n does not have a natural square root.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}
	return check_sqrt(n, 0);
}
