#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - Removes and returns the value of the first node in a linked list
  * @head: The head of the linked list
  *
  * Return: The value of the removed node, or 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int value = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		value = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (value);
}

