#include "main.h"

/**
 * print_square -  function that prints a square
 *
 * @size: take input
 *
 * Return: always 0 (success)
*/

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}

