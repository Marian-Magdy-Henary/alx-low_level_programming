#include "main.h"
/**
 * puts_half - entry point
 *
 * @str : checks input of function
*/
void puts_half(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0'; i++)
;
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar (str[i]);
}
_putchar ('\n');
}
