#include "lists.h"
/**
 * add_nodeint - add a new node a the beginning of a list.
 *@n: is a value of data.
 *@head: is a init the linked list.
 * Return: address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}
