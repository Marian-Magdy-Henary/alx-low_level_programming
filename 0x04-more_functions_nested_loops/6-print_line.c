#include "main.h"
/**
 * print_line - entry point
 *
 * @n : checks input of function
*/
void print_line(int n)
{
int i = 0;
if (n > 0)
{
while (i >= 1)
{
if (i == n)
{
break;
}
_putchar (95);
n++;
}
_putchar ('\n');
}
else
{
_putchar ('\n');
}
}
