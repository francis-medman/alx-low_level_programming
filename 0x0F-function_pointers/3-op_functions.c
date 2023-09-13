#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add two nums
  * @a: first num
  * @b: sec num
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract two nums
  * @a: num onw
  * @b: num two
  *
  * Return: subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply two nums
  * @a: num one
  * @b: num two
  *
  * Return: multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides
  * @a: num one
  * @b: num two
  *
  * Return: quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modulus op 
  * @a:
  * @b:
  *
  * Return: remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
