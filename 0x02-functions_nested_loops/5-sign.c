#include "main.h"

/**
 * print_sign -  prints the sign of a number
 *
 * @n: ckeck the input of function
 *
 * Return:  returns (1 if n > 0) , (0 if n = 0) and (-1 if n < 0)
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
