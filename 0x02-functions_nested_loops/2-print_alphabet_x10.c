#include "main.h"

/**
 * print_alphabet -  prints 10 times the alphabet, in lowercase
 *
 * Description : prints 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void)
{
int i = 1;
while (i <= 10)
{
char c = 97;

while (c <= 122)
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
