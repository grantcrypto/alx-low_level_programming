#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct
 * function to perform the operation
 * @s: operator passed as argument to the program
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter
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


{
	i = 0;
/* initialize i */

/* s does not match any of the operand */
	while (ops[i].op != NULL && *ops[i].op != *s)
		i++;

	return (ops[i].f);
}

/*
 * In the context you've described, ops[i].op == *s compares
 * the op member of the i-th element in the ops
 * array with the character pointed
 * to by the s pointer. Here, s is the operator passed as
 * an argument to the program,
 * and ops is an array of structs where each struct has an
 * op member representing an operator.
 *
 * In the context of (ops[i].f), ops[i].f typically represents a function
 * pointer within a struct. This syntax is used to access the function
 * pointer stored inside a struct element at index i in the ops array.
 */
}
