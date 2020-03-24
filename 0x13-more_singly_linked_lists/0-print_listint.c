#include "lists.h"
/**
 * print_listint - print all the elements of a list.
 *@h: is a list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
