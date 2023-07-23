#include "main.h"
/**
 * more_numbers - entry point
 *
*/
void more_numbers(void)
{
int i = 1;
int c = 0;
int num;
for (i = 1; i <= 10; i++)
{
for (c = 0; c <= 14; c++)
{
num = c;
if (c > 9)
{
_putchar (1 + 48);
num = c % 10;
}
_putchar (num + 48);
}
_putchar ('\n');
}
}
