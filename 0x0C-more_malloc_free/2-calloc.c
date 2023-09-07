#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array and initialize it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated and initialized memory.
 *         If nmemb or size is 0, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int total_size;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total_size = nmemb * size;
    ptr = malloc(total_size);

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < total_size; i++)
        *((char *)ptr + i) = 0;

    return (ptr);
}
