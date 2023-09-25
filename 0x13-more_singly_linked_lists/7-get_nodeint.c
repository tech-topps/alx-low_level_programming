#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: NULL or pointer to the node we're looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *nw = head;

while (nw && a < index)
{
nw = nw->next;
a++;
}

return (nw ? nw : NULL);
}

