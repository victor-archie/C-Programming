#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *j;
	listint_t *k;

	j = NULL;
	k = NULL;

	while (*head != NULL)
	{
		k = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = k;
	}

	*head = j;
	return (*head);
}
