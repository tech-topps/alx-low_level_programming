#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: parameter pointer to the first element in the linked list
 *
 * Return: 0 or the data inside the elements that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *nw;
	int top;

	if (!head || !*head)
		return (0);

	top = (*head)->n;
	nw = (*head)->next;
	free(*head);
	*head = nw;

	return (top);
}
