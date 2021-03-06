#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
/* for not double inclusion */

/* the libraries standard */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* the prototype functions */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
#endif
