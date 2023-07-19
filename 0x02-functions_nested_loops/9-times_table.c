#include "main.h"
/**
 * times_table - entry point
 *
*/
void times_table(void)
{
int a = 0;
int b = 0;
int i = 0;
for (a = 0 ; a <= 9 ; a++)
{
for (b = 0 ; b <= 9 ; b++)
{
i = i + 1;
_putchar (i);
_putchar (',');
_putchar (0);
}
}
_putchar ('\n');
}
