#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Function Returns the sum of all the data (n)
 * @head: This is A pointer to the head of the list.
 *
 * Return: The sum of the data
 */

int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}

