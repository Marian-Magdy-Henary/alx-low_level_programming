#include "main.h"
/**
 * print_rev - entry point
 *
 * @s : checks input of function
*/
void print_rev(char *s)
{
int counter = 0;
int z;
while (*s !='\0')
{
counter++;
s++;
}
s--;
for (z = counter; z > 0 ; z++)
{
_putchar (*s);
s--;
}
_putchar ('\n');
}

