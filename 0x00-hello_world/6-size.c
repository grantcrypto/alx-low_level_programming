#include <stdio.h>

/**
 * main - the main function
 *
 * Return: return 0 when successful
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(char));
	printf("size of a int: %lu byte(s)\n",(unsigned long)sizeof(int));
	printf("size of a long int: %lu byte(s)\n",(unsigned long)sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(long long int));
	printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(float));
	return (0);
}
