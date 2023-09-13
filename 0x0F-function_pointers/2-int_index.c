#include "function_pointers.h"

/**
  * int_index - Search for an integer in an array
  * @array: Pointer to the array
  * @size: Number of elements in the array
  * @cmp: Pointer to the function used for comparison
  *
  * Return: Index of the first element for which cmp function does not return 0
  * If no element matches or size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;
		
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
