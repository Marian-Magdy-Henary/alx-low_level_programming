#include "main.h"
/**
 * print_square - entry point
 *
 * @size : checks input of function
*/
void print_square(int size)
{
int raw = 1;
int col = 1;
if (size > 0)
{
for (raw = 1; raw <= size; raw++)
{
_putchar (35);
for (col = 1; col <= raw; col++)
{
_putchar (35);
}
}
}
else
{
_putchar ('\n');
}
}

