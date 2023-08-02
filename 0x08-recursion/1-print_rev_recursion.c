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
_print_rev_recursion(s - 1);
_putchar (*s);
}
else
{
_print_rev_recursion(s + 1);
}
}
