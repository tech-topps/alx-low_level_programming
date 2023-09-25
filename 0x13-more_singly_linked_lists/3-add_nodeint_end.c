#include "lists.h"

/**
 * add_nodeint_end - function that add a new node
 * @head: parameter pointer to the address list
 * @n: parameter integar
 * Return: NULL or address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nw, *first;

nw = malloc(sizeof(listint_t));
if (nw == NULL)
	return (NULL);

nw->n = n;
nw->next = NULL;

if (*head == NULL)
	*head = nw;

else
{
first = *head;
while (first->next != NULL)
	first = first->next;
first->next = nw;
}
return (*head);
}
