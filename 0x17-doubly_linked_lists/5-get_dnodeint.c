#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of a list.
 *@head: is a header.
 *@index: is thr index node and starting form 0.
 * Return: return NULL if node no exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *node_index = head;

	for (counter = 0; counter < index && node_index != NULL; counter++)
	{
		node_index = node_index->next;
	}
	if (node_index == NULL)
	{
		return (NULL);
	}
	return (node_index);
}
