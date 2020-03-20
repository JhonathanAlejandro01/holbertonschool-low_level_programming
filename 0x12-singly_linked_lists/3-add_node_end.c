#include "lists.h"
/**
 * _strlen - this function returns the length of a string.
 * @s : s is a character
 * Return: the numbers of length - i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - add nodo at the end of a list.
 *@head: header.
 *@str: is a string character.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodo;
	list_t *p;

	new_nodo = malloc(sizeof(list_t));
	if (new_nodo != NULL)
	{
		new_nodo->str = strdup(str);
		new_nodo->len = _strlen(str);
		new_nodo->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_nodo;
		return (new_nodo);
	}
	p = *head;

	while (p->next)
	{
		p = p->next;
	}
	p->next = new_nodo;
	return (new_nodo);
}
