#include "main.h"
/**
 * times_table - entry point
 *
*/
void times_table(void)
{
int a = 48;
int b = 48;
for (a = 48 ; a <= 57 ; a++)
{
for (b = 0 ; b <= 57 ; b++)
{
a = a + b;
_putchar (a);
_putchar (',');
_putchar (0);
}
}
_putchar ('\n');
}
