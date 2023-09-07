#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: A pointer to the newly created array.
 *         If min > max or if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, i;

    if (min > max)
        return (NULL);

    size = max - min + 1;
    arr = malloc(sizeof(int) * size);

    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min++;

    return (arr);
}
