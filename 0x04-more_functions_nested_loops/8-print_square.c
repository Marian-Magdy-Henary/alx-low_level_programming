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
for (col = 1; col <= size; col++)
{
_putchar ('#');
}
}
}
else
{
_putchar ('\n');
}
}

