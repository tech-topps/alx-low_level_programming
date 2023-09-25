#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: parameter pointer to the head
 */

void free_listint(listint_t *head)
{
listint_t *nw;

while (head)
{
nw = head->next;
free(head);
head = nw;
}
}
