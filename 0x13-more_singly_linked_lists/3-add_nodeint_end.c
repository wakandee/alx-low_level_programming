#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a linked list
  * @head: The head of the linked list
  * @data: The value to add to the end of the linked list
  *
  * Return: The address of the new element, or NULL if it fails
  */
listint_t *add_nodeint_end(listint_t **head, const int data)
{
	listint_t *new_node, *temp;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = data;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;

			temp->next = new_node;
			return (temp);
		}
	}

	return (NULL);
}

