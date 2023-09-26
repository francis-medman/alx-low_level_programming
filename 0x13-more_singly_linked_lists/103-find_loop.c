#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: A pointer to the head
 *
 * Return: The address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slug, *cheetah;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slug = head->next;
	cheetah = head->next->next;

	while (cheetah && cheetah->next)
	{
		if (slug == cheetah)
		{
			slug = head;
			while (slug != cheetah)
			{
				slug = slug->next;
				cheetah = cheetah->next;
			}
			return (slug);

			slug = slug->next;
			cheetah = cheetah->next->next;
		}
	}
	return (NULL);
}
