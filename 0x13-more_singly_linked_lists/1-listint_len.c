#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list in a single line
 * @h: The head of the linked list
 *
 * Return: The number of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);

		if (h->next != NULL)
			printf(" -> ");

		h = h->next;
		count++;
	}

	printf("\n");

	return (count);
}

