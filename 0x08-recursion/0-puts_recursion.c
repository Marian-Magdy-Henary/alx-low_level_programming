#include "main.h"
/**
 * _puts_recursion - entry point
 *
 * @s : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar ('\n');
}
else
{
_putchar (*s);
_puts_recursion(s + 1);
}
}
