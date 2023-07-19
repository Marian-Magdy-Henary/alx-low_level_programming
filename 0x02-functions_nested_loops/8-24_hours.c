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
int d = 48;
for (c = 48 ; c <= 57 ; c++)
{
for (d = 48 ; d <= 50 ; d++)
{
for (a = 48 ; a <= 53 ; a++)
{
for (b = 48 ; b <= 57 ; b++)
{
_putchar (d);
_putchar (c);
_putchar (58);
_putchar (a);
_putchar (b);
_putchar ('\n');
}
}
}
}
}
