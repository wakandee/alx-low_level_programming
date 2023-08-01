#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @data: The value to add to the new node
  *
  * Return: The address of the new element, or NULL if it fails
  */
listint_t *add_nodeint(listint_t **head, const int data)
{
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = data;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	return (NULL);
}

