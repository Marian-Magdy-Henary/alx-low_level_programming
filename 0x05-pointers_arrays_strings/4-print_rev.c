#include "main.h"
/**
 * print_rev - entry point
 *
 * @s : checks input of function
*/
void print_rev(char *s)
{
int counter ;
int rev ;
for (counter = 0; *s != '\0'; s++)
{
++counter;
}
for (rev = counter; rev >= 0; rev--)
{
_putchar (s[rev]);
}
_putchar ('\n');
}
