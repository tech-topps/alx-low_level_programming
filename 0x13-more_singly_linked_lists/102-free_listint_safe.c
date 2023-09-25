#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
size_t ben = 0;
int lidf;
listint_t *top;

if (!h || !*h)
return (0);

while (*h)
{
lidf = *h - (*h)->next;
if (lidf > 0)
{
top = (*h)->next;
free(*h);
*h = top;
ben++;
}
else
{
free(*h);
*h = NULL;
ben++;
break;
}
}

*h = NULL;

return (ben);
}
