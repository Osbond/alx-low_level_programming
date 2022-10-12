#ifndef CALC_H
#define CALC_H

/**
 * struct op - struct for operators and function associated
 * @op: operators
 * @f: pointer to function associated
 */
struct op
{
	char *op;
	int (*f)(int a, int b);
};
typedef struct op op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#include <stdlib.h>
#include <stdio.h>

#endif /* CALC_H*/
