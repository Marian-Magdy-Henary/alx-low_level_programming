#include "main.h"
/**
 * print_line - entry point
 *
 * @n : checks input of function
*/
void print_line(int n)
{
int i = 1;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar (95);
}
_putchar ('\n');
}
else
{
_putchar ('\n');
}
}
