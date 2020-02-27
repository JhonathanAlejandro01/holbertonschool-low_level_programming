#include "holberton.h"


int is_palindrome(char *s);
int compare(int i, int size, char *s, int add);
int _strlen_recursion(char *s);


/**
 * is_palindrome -  sss
 * @s: string
 * Return: return something
 */
int is_palindrome(char *s)
{
	int i, size, add;

	i = 0;
	add = 0;
	size = _strlen_recursion(s);
	add = (size % 2 != 0) ? 2 : 1;

	return (compare(i, size - 1, s, add));
}

/**
 * compare - compare
 * @i: i
 * @size: size
 * @s: string
 * @add: addition depending if n is odd or even
 * Return: return value
 */
int compare(int i, int size, char *s, int add)
{

	if (i + add == size && s[i] == s[size])
	{
		return (1);
	}

	if (s[i] == s[size])
	{
		return (compare(i + 1, size - 1, s, add));
	}

	return (0);

}

/**
 * _strlen_recursion - legth of a string
 * @s: string
 * Return: return legth
 */
int _strlen_recursion(char *s)
{

	if (!*s)
	{

		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
