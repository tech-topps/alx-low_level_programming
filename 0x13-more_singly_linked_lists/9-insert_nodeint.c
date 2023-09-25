#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node in a linked list
 * @head: parameter pointer to the first node in the list
 * @idx: parameter index where the new node is added
 * @n: parameter data to insert in the new node
 * Return: NULL or pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *nw;
listint_t *top = *head;

nw = malloc(sizeof(listint_t));
if (!nw || !head)
	return (NULL);

nw->n = n;
nw->next = NULL;

if (idx == 0)
{
nw->next = *head;
*head = nw;
return (nw);
}

for (a = 0; top && a < idx; a++)
{
if (a == idx - 1)
{
nw->next = top->next;
top->next = nw;
return (nw);
}
else
top = top->next;
}

return (NULL);
}
