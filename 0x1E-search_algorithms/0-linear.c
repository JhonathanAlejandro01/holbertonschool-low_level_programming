#include "search_algos.h"
/**
 * linear_search - Write a function that searches for a value in an array.
 *@array: array to search.
 *@size: size of array.
 *@value: value search.
 * Return: the value i.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		if ((i + 1) == size)
		{
			return (-1);
		}
	}
	return (0);
}
