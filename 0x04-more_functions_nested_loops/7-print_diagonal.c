#include "main.h"
/**
 * print_diagonal - entry point
 *
 * @n : checks input of function
*/
void print_diagonal(int n)
{
int i = 1;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar ('\n');
}
_putchar (32);
_putchar ('\n');
}
else
{
_putchar ('\n');
}
}
