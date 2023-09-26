#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function  Returns the nth node
 * @head: This is A pointer to the head of the list.
 * @index: The index of the node to retrieve
 *
 * Return: the pointer to the nth node, or NULL if it does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head != NULL)
{
if (count == index)
return (head);

head = head->next;
count++;
}

return (NULL);
}

