#include "holberton.h"
/**
 * _puts_rev_recursion - prototype.
 *@s: is parameter.
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
