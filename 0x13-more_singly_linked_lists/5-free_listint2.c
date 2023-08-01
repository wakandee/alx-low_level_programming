#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - Frees a linked list and sets the head to NULL
  * @head: The head of the linked list
  *
  * Return: None
  */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
		}
	}
	else
	{
		return;
	}

	free(*head);
	*head = NULL;
}

