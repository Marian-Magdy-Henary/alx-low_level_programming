#include "main.h"
/**
 * _print_rev_recursion - entry point
 *
 * @s : checks input of function
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar (*s);
_puts_recursion(s - 1);
}
else
{
_putchar ('\n');
}
}