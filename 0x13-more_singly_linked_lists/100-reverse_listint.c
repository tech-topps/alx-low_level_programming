#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: parameter pointer to the first node in the list
 * Return: parameter pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *rev = NULL;
listint_t *net = NULL;

while (*head)
{
net = (*head)->next;
(*head)->next = rev;
rev = *head;
*head = net;
}

*head = rev;

return (*head);
}
