#include "lists.h"
/**
 * listint_len - the function return the number of the elements in a list.
 *@h: is a linked list.
 * Return: the number of elements a list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
