#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - Deletes a node at a given index in a linked list
  * @head: The head of the linked list
  * @index: The index of the node to be deleted
  *
  * Return: 1 if the deletion is successful, -1 if it fails
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *current = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			current = temp->next;
			temp->next = current->next;
			free(current);
			return (1);
		}

		temp = temp->next;
		count++;
	}

	return (-1);
}

