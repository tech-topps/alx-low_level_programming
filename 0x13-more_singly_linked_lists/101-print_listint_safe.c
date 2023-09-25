#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
const listint_t *temitope, *hare;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
	return (0);

temitope = head->next;
hare = (head->next)->next;

while (hare)
{
if (temitope == hare)
{
temitope = head;
while (temitope != hare)
{
nodes++;
temitope = temitope->next;
hare = hare->next;
}

temitope = temitope->next;
while (temitope != hare)
{
nodes++;
temitope = temitope->next;
}

return (nodes);
}

temitope = temitope->next;
hare = (hare->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t notes, dex = 0;

notes = looped_listint_len(head);

if (notes == 0)
{
for (; head != NULL; notes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (dex = 0; dex < notes; dex++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (notes);
}
