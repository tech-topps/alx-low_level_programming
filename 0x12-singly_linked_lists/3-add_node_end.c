#include "lists.h"

/**
 * add_node_end - function that add node to the end of lists
 * @head: parameter head of node
 * @str: parameter string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, *tp;
unsigned int a, count = 0;

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
	return (NULL);
newnode->str = strdup(str);
for (a = 0; str[a] != '\0'; a++)
	count++;
newnode->len = count;
newnode->next = NULL;
tp = *head;

if (tp == NULL)
	*head = newnode;
else
{
while (tp->next != NULL)
	tp = tp->next;
tp->next = newnode;
}
return (*head);
}
