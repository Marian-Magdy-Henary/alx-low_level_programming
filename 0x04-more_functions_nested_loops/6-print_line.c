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
while (i >= 1)
{
_putchar (95);
if (i == n)
{
break;
}
n++;
}
_putchar ('\n');
}
else
{
_putchar ('\n');
}
}
