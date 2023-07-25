#include "main.h"
/**
 * print_rev - entry point
 *
 * @s : checks input of function
*/
void print_rev(char *s)
{
int counter;
for (counter = 0; *s == '\0'; *s--)
{
_putchar (*s);
counter++;
}
_putchar ('\n');
}
