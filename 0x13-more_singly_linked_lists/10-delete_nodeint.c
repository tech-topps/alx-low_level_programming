#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node in a linked list
 * @head: parameter pointer to the first element in the list
 * @index: parameter index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *top = *head;
listint_t *now = NULL;
unsigned int a = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(top);
return (1);
}

while (a < index - 1)
{
if (!top || !(top->next))
	return (-1);
top = top->next;
a++;
}

now = top->next;
top->next = now->next;
free(now);

return (1);
}
