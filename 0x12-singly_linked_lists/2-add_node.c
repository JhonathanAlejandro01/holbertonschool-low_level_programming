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
/* end function */
/**
 * add_node - add new nodos at the beginning of a list.
 *@head: header
 *@str: string of characters.
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	/* statement a viarible */
	list_t *new_nodo;

	/* used malloc for space in memory (heap) */
	new_nodo = malloc(sizeof(list_t));
	if (new_nodo != NULL)
	{
		new_nodo->str = strdup(str);
		new_nodo->len = _strlen(str);
		new_nodo->next = *head;
		*head = new_nodo;
	}
	else
	{
		return (NULL);
	}
	return (new_nodo);
}
/* end function */
