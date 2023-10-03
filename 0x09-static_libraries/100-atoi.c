#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: pointer to be converted
 * Return: char
 */

int _atoi(char *s)
{
	unsigned int ni = 0;/**to iterate through the characters of the string*/
	int c = 0;/** keeps track of num of digits encountered in the string*/
	int min = 1;/** is used to track the sign of the number, postive or negative*/
	int isi = 0;/** stores the final converted integer value*/

	while (s[c])
	{
	if (s[c] == 45)
	{
	min *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	isi = 1;
	ni = (ni * 10) + (s[c] - '0');
	c++;
	}
	if (isi == 1)
	{
	break;
	}
	c++;
	}
	ni *= min;
	return (ni);
}
