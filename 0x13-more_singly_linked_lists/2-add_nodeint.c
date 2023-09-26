#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Function Adds a new node at the beginning of a listint_t list.
 * @head: This is a pointer to a pointer to the head of the list.
 * @n: This integer value stores the new node.
 *
 * Return: This is the  address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}

