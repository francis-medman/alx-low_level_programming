#include "main.h"

/**
  * check_prime - Helper function to check if n is prime using recursion.
  * @n: The integer to be checked.
  * @divisor: The current divisor being checked.
  *
  * Return: 1 if n is prime, 0 otherwise.
  */
int check_prime(int n, int divisor)
{
	if (n <= 1)
	{
		return 0;
	}
	else if (divisor >= n)
	{
		return 1;
	}
	else if (n % divisor == 0)
	{
		return 0;
	}
	
	return check_prime(n, divisor + 1);
}

/**
  * is_prime_number - Checks if an input integer is a prime number.
  * @n: The integer to be checked.
  *
  * Return: 1 if n is prime, 0 otherwise.
  */
int is_prime_number(int n)
{
	return check_prime(n, 2);
}
