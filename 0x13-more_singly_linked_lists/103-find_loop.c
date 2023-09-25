#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *low = head;
listint_t *fat = head;

if (!head)
return (NULL);

while (low && fat && fat->next)
{
fat = fat->next->next;
low = low->next;
if (fat == low)
{
low = head;
while (low != fat)
{
low = low->next;
fat = fat->next;
}
return (fat);
}
}

return (NULL);
}
