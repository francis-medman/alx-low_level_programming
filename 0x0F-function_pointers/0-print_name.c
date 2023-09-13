#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: name to print
  * @f: pointer to a function that prints a name
  *
  * Description: This fn takes a name and a fn ptr
  * to print the name using the specified printing function.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
