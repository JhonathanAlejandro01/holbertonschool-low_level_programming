#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - this program multiply two numbers
 * @argv: return of size of argv
 * @argc: return of values of program
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
		return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
