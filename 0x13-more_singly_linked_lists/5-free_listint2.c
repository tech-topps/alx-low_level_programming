#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: parameter pointer to the address
 * set the head to NULL
 */

void free_listint2(listint_t **head)
{
listint_t *nw;

if (head == NULL)
	return;

while (*head)
{
nw = (*head)->next;
free(*head);
*head = nw;
}
head = NULL;
}
