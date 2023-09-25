#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that return the number of elements
 * @h: parameter pointer to the head
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
