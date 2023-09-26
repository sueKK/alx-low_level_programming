#include <stddef.h>
#include "lists.h"

/**
 * listint_len - function Returns the number of elements listint_t list.
 * @h: This is a pointer to the head of the list.
 *
 * Return: This the number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
size_t element_count = 0;

while (h != NULL)
{
element_count++;
h = h->next;
}

return (element_count);
}

