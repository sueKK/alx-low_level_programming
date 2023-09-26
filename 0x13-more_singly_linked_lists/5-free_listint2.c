#include <stdlib.h>
#include "lists.h" // Make sure to include the appropriate header file

/**
 * free_listint2 - This Function Frees a listint_t list and sets the head to NULL.
 * @head: This a pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL)
return;

while (*head != NULL)
{
 current = *head;
 *head = (*head)->next;
 free(current);
}
}

