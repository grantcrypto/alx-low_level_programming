#include <stdio.h>
/**
 * main -  prints all arguments it receives
 * @argc: number of command line argument
 * @argv: array of command line argument
 * Return: (0) at success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
