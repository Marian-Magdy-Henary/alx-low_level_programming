#include "main.h"
/**
 * times_table - entry point
 *
*/
void times_table(void)
{
int a, b, c;
for (a = 0 ; a <= 9 ; a++)
{
_putchar (48);
for (b = 1 ; b <= 9 ; b++)
{
_putchar (',');
_putchar (' ');
c = a * b;
_putchar (c / 10);
_putchar (c % 10);
}
_putchar ('\n');
}
}
