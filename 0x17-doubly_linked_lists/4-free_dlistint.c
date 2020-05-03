#include "lists.h"
/**
 * free_dlistint - free the dlistint_t.
 *@head: is header of the list.
 * Return: return 0.
 */
void free_dlistint(dlistint_t *head)
{
	/* create a temporal viarible */
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
