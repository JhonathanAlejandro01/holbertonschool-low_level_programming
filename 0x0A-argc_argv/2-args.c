#include <stdio.h>
/**
 *main - is fuction.
 *@argc: count variable
 *@argv: return of values of program.
 *Return: devolvel 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
