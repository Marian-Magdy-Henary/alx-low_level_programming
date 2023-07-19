#include "main.h"
/**
 * jack_bauer - entry point
 *
*/
void jack_bauer(void)
{
int a = 48;
int b = 48;
int c = 48;
for (c = 0 ; c <= 23 ; c++)
{
for (a = 48 ; a <= 53 ; a++)
{
for (b = 48 ; b <= 57 ; b++)
{
_putchar (48 + c);
_putchar (58);
_putchar (a);
_putchar (b);
_putchar ('\n');
}
}
}
}
