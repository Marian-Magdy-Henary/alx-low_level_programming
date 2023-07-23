#include "main.h"
/**
 * print_diagonal - entry point
 *
 * @n : checks input of function
*/
void print_diagonal(int n)
{
int i = 1;
int space = 1;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (space = 1; space <= i; space++)
{
_putchar (' ');
}
_putchar (92);
}
_putchar ('\n');
}
else
{
_putchar ('\n');
}
}
