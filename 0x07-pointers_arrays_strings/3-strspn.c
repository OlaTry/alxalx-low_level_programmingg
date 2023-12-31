#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: take input
 *
 * @accept: take input
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
