#include "main.h"
/**
 * _print_rev_recursion - entry point
 *
 * @s : checks input of function
*/
void _print_rev_recursion(char *s)
{
_print_rev_recursion(s + 1);
if (*s == '\0')
{
_print_rev_recursion(s - 1);
_putchar (*s);
}
else
{
_putchar ('\n');
}
}
