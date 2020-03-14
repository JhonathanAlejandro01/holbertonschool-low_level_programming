<<<<<<< HEAD
#ifdef _3_
#define _3_
#include <stdio.h>
=======
#ifndef CALC_H
#define CALC_H
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
 
>>>>>>> 894f744186fa92e27cffb044ad7a31db34a3b12f
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
<<<<<<< HEAD
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
nt op_div(int a, int b);
int op_mod(int a, int b);
=======
 
>>>>>>> 894f744186fa92e27cffb044ad7a31db34a3b12f
#endif
