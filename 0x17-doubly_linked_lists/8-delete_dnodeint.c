#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes the of a double linked list.
 *@head: is header.
 *@index: where is the index of the node that should be delete.
 * Return: if 1 it succeeded, if -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *position_current;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	position_current = *head;
	if (index == 0)
	{
		*head = position_current->next;
		if (position_current->next != NULL)
		{
			position_current->prev = NULL;
		}
		free(position_current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (position_current->next == NULL)
		{
			return (-1);
		}
		position_current = position_current->next;
	}
	position_current->prev->next = position_current->next;
	if (position_current->next != NULL)
	{
		position_current->next->prev = position_current->prev;
	}
	free(position_current);
	return (1);
}
