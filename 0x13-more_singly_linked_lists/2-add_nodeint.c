#include "lists.h"

/**
 * add_nodeint - function add a new node at the beginning
 * @head: parameter pointer to the address
 * @n: parameter integer for the new node
 * Return: NULL or the address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nw;

nw = malloc(sizeof(listint_t));
if (nw == NULL)
	return (NULL);

nw->n = n;
nw->next = *head;

*head = nw;

return (nw);
}
