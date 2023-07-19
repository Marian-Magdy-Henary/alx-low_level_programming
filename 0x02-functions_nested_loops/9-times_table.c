#include "main.h"
/**
 * times_table - entry point
 *
*/
void times_table(void)
{
int a = 48;
int b = 48;
int c = 0;
for (a = 48 ; a <= 57 ; a++)
{
_putchar (48);
for (b = 48 ; b <= 57 ; b++)
{
c = a * b;
_putchar (c);
_putchar (',');
_putchar (0);
}
}
_putchar ('\n');
}
