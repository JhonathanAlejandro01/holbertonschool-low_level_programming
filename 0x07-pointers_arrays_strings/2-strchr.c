#include "holberton.h"
/**
 * *_strchr - is a prototype.
 *@s: is parameter.
 *@c: is paameter.
 *
 *Return: always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
