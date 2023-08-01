#include "lists.h"

/**
 * find_listint_loop - Finds the node where the loop starts in a linked list.
 * @head: The head of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}

	if (slow && fast && fast->next)
	{
		slow = head;

		while (1)
		{
			slow = slow->next;
			fast = fast->next;

			if (fast->next == slow->next)
				return (slow->next);
		}
	}

	return (NULL);
}

