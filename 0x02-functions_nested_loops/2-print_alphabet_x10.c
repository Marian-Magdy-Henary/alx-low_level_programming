#include "main.h"
/**
 * print_alphabet_x10-entry point
 *
 * print_alphabet_x10 to print phrase by _putchar function
 *
*/
void print_alphabet_x10(void)
{
int a = 97;
int A = 0;
for (A = 0 ; A <= 9 ; A++)
{
for (a = 97 ; a <= 122 ; a++)
{
_putchar (a);
}
_putchar ('\n');
}
}
