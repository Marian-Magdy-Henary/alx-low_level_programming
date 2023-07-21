#include "main.h"
/**
 * more_numbers - entry point
 *
*/
void more_numbers(void)
{
int i = 0;
int c = 48;
int d = 48;
for (i = 0; i <= 9; i++)
{
for (c = 48; c <= 57; c++)
{
_putchar (c);
if (c == 57)
{
_putchar (49 + 48);
}
for (d = 49; d <= 52; d++)
{
_putchar (49 + d);
}
}
_putchar ('\n');
}
}
