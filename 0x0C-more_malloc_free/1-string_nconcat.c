#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: take input
 * @s2: take input
 * @n: take number
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_len, s2_len;

	/*check if strings are null */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*compute the length of the strings*/

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	/*memory reservation */
	str = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	/*copy first string */
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	/*copy second string */
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
