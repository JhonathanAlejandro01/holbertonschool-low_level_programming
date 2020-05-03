#include "lists.h"
/**
 * print_dlistint - print all elements of the dlistint_t.
 *@h:is the list.
 * Return: the number of nodos.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
