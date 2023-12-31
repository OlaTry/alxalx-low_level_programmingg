#include "main.h"
#include <stdio.h>

/**
 * isLower -  a function that returns a lowercase
 *
 * @c: take input
 *
 * Return: lower
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter -  a function that take isDelimiters
 *
 * @c: take input
 *
 * Return: 0
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string -  a function that capitalizes all words of a string
 *
 * @s: take input
 *
 * Return: 1 if true, 0 if false
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
