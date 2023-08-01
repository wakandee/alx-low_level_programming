#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - Computes the sum of all elements in a linked list
  * @head: The head of the linked list
  *
  * Return: The sum of all elements in the linked list, or 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}

