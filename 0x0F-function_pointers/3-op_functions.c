#include <stidio.h>
#include "3-calc.h"
/**
 * op_add - operator add
 *@a: is a integer number
 *@b: is a integer number
 * Return: total
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - operator add
 *@a: is a integer number
 *@b: is a integer number
 * Return: total
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - operator add
 *@a: is a integer number
 *@b: is a integer number
 * Return: total
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - operator add
 *@a: is a integer number
 *@b: is a integer number
 * Return: total
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf ("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - operator add
 *@a: is a integer number
 *@b: is a integer number
 * Return: total
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf ("Error\n");
		exit(100);
	}
	return (a % b);
}
