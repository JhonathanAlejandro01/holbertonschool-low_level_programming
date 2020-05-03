#include "lists.h"
/**
 * add_dnodeint - add a new nodo the strat of list.
 *@head: header.
 *@n: elements of the list.
 * Return: the adress the new elementos o NULL if break.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo;

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
	new_nodo->next = *head;
	(*head)->prev = new_nodo;
	*head = new_nodo;

	return (new_nodo);
}
