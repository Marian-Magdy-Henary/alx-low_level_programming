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
_putchar (a);
for (b = 48 ; b <= 57 ; b++)
{
_putchar (b);
_putchar (',');
_putchar (0);
}
}
_putchar ('\n');
}
