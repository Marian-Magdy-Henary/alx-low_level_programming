#include "main.h"
/**
 * print_sign - entry point
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'n' is sign otherwise 0 (success)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar ("+");
return (1);
}
if (n == 0)
{
_putchar ("0");
return (0);
}
else
{
_putchar ("-");
return (-1);
}
}
