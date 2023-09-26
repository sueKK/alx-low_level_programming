#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - This function Frees a listint_t list.
 * @head: This is a pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}

