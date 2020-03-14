<<<<<<< HEAD
#include "3-calc.h"
/**
 * get_op_func - is funcion
 *@s: is a pointer
 * Return: return a number
=======
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
 
/**
 * get_op_func - selects the correct func to perform the operation
 * @s: operator passed as arguement to program
 * Return: a pointer to the function given operator
>>>>>>> 894f744186fa92e27cffb044ad7a31db34a3b12f
 */
 
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
 
	i = 0;
	while (i < 5)
	{
<<<<<<< HEAD
		if(strcmp(s,ops[i].op[0]) == 0)
			return (ops[i].f);
=======
		if (*s == *(ops[i]).op)
		{
			return (*(ops[i]).f);
		}
>>>>>>> 894f744186fa92e27cffb044ad7a31db34a3b12f
		i++;
	}
	return (NULL);
}
