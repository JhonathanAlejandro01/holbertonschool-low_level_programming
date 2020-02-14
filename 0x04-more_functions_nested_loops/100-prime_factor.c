#include <stdio.h>
/**
 * main - rints the largest prime factors.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long x;

	for (x = 2; x < n; x++)
	{
		while (n % x == 0)
		{
			n = n / x;
		}
	}
	printf("%li\n", n);
	return (0);

}
