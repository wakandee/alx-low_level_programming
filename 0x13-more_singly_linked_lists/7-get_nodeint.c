#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - Retrieves the node at a given index in a linked list
  * @head: The head of the linked list
  * @index: The index of the node to retrieve
  *
  * Return: The node at the specified index, or NULL if the index is out of range
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (position == index)
				return (head);

			head = head->next;
			position++;
		}
	}

	return (NULL);
}

