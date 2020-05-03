#include "lists.h"
/**
 * dlistint_len - return the numbers elemenst od the list.
 *@h: elements
 * Return: retunr elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
