#include "lists.h"
/**
 * list_len - counter the elements of list.
 *@h: element lista.
 * Return: size_t is a integer unsigned.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
