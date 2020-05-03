#include "lists.h"
/**
 * insert_dnodeint_at_index - funtion that insert a new node at given position.
 *@h: is header.
 *@idx: is the index of the list where the new node add.
 *@n: is the elements.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *position;
	unsigned int iter;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	position = *h;
	for (iter = 0; position && iter < idx; iter++)
	{
		position = position->next;
	}
	if (position == NULL && iter == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (position)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		position->prev->next = new_node;
		new_node->prev = position->prev;
		position->prev = new_node;
		new_node->next = position;
		return (new_node);
	}
	return (NULL);
}
