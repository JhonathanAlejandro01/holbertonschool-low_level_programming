#include "lists.h"
/**
 * free_list - free memory space.
 *@head: is a list
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		fred(head);
		head = ptr;
	}
}
