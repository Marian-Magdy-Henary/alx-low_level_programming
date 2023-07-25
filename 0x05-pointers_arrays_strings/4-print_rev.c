#include "main.h"
/**
 * print_rev - entry point
 *
 * @s : checks input of function
*/
void print_rev(char *s)
{
int counter = 0;
while (s[counter])
{
counter++;
}
while (counter--)
{
_putchar (s[counter]);
}
_putchar ('\n');
}

