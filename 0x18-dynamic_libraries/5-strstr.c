#include "holberton.h"
/**
 * _strstr - prototype.
 * @haystack: is a parameter.
 * @needle: is a parameter.
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
				&& *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (beginning);
		}
		haystack = beginning + 1;
	}
	return (NULL);
}
