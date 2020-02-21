#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 *@s1: is a parameter.
 *@s2: is a parameter.
 *
 * Return: resultado.
 */
int _strcmp(char *s1, char *s2)
{
	int i, resultado;

	resultado = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			resultado = s1[i] - s2[i];
			return (resultado);

		}
	}


	return (resultado);
}
