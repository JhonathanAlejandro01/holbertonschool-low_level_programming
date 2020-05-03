#include "lists.h"
/**
 * sum_dlistint - return the add of all dates of the list.
 *@head: the header.
 * Return: return 0 if list is empety.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
