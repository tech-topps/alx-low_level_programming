#include "lists.h"

/**
 * add_node - function that add node at the beginning
 * @head: parameter head of node
 * @str: parameter string to store
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
unsigned int a, count = 0;

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
	return (NULL);
newnode->str = strdup(str);
for (a = 0; str[a] != '\0'; a++)
	count++;
newnode->len = count;
newnode->next = *head;
*head = newnode;

return (*head);
}
