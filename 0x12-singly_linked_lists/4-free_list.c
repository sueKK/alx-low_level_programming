#include <stdlib.h>
#include "lists.h"

/**
 * free_list - The function frees a linked list
 * @head: This list_ specifies which list to be freed
 */

void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}

