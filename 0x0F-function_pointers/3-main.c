#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - perform calculator function on the command line
 * @argc: argument count
 * @argv: argument vector
 * Return: result of calculation performed
 */
int main(int argc, char *argv[])
{
	char *op;
	int num1, num2; /* input numbers */

	/* if argument count is wrong */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* set command argument inputs */
	num1 = atoi(argv[1]); /* first input */
	op = (argv[2]); /* operator */
	num2 = atoi(argv[3]); /* seconf input */

	/* if the operator is not in the list */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* if user tries to divide or modulus by 0 */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	/* print result of operation */
	printf("%d\n", get_op_func(op) (num1, num2));

	return (0);
}
