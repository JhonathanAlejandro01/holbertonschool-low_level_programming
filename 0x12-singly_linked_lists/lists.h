/* for not double inclusion */
#ifndef _LIST_H_
#define _LIST_H_
/* the libraries standard */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* This is struct */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
/* the prototype functions */
size_t print_list(const list_t *h);
#enfif
