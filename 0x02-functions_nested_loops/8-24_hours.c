#include "main.h"
/**
 * jack_bauer - entry point
 *
*/
void jack_bauer(void)
{
int b = 0;
int c = 0;
for (c = 0 ; c <= 23 ; c++)
{
for (b = 0 ; b <= 59 ; b++)
{
_putchar (c / 10 + 48);
_putchar (c % 10 + 48);
_putchar (58);
_putchar (b / 10 + 48);
_putchar (b % 10 + 48);
_putchar ('\n');
}
}
}
