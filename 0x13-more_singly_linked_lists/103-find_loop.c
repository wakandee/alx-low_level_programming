#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: The head of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);

	tortoise = hare = head;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare) // Collision, loop detected
		{
			tortoise = head; // Reset one pointer to the head
			while (tortoise != hare) // Move both pointers until they meet
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise); // Return the node where the loop starts
		}
	}

	return (NULL); // No loop found
}

