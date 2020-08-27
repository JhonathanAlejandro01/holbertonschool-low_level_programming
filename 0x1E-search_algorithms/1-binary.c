#include "search_algos.h"
/**
 * binary_search - Write a function that searches for a value in a sorted array
 *@array: array to search.
 *@size: size of array.
 *@value: value search.
 * Return: return the index
 */
int binary_search(int *array, size_t size, int value)
{
	int i, j;
	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}
		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		else if (value > array[j])
			left = j + 1;
		else if (value < array[j])
			right = j - 1;
	}
	return (-1);
}
