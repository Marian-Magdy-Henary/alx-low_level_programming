#include "main.h"
/**
 * print_most_numbers - entry point
 *
*/
void print_most_numbers(void)
{
int i = 48;
for (i = 48; i <= 57; i++)
{
if (i == 50 || i == 52)
{
continue;
}
else
{
_putchar (i);
_putchar ('\n');
}
}
}
