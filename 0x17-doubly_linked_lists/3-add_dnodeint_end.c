#include "lists.h"
/**
 * add_dnodeint_end - add a node a final of list
 *@head: the list.
 *@n: varibale inside.
 * Return: the new nodo.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo, *h;

	h = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new_nodo = malloc(sizeof(dlistint_t));
	if (new_nodo == NULL)
	{
		return (NULL);
	}
	new_nodo->n = n;
	new_nodo->next = NULL;
	new_nodo->prev = NULL;
	if (*head == NULL)
	{
		*head = new_nodo;
		return (new_nodo);
	}
	while (*head != NULL && h->next)
	{
		h = h->next;
	}
	new_nodo->prev = h;
	h->next = new_nodo;
	return (new_nodo);
}
