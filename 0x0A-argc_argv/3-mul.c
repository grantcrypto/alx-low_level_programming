#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 * @argc: number of command line argument
 * @argv: array of command line argument
 * Return: (0) at success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
