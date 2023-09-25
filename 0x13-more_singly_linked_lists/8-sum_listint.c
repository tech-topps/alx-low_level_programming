#include "lists.h"

/**
 * sum_listint - function calculates the sum of all the data in a list
 * @head: parameter first node in the linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
int add = 0;
listint_t *nw = head;

while (nw)
{
add += nw->n;
nw = nw->next;
}

return (add);
}
