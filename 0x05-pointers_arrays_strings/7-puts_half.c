#include "main.h"
/**
 * puts_half - entry point
 *
 * @str : checks input of function
*/
void puts_half(char *str)
{
int i = 0;
int dev = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
dev = i / 2;
str[dev];
}
else if (i % 2 != 0)
{
dev = (i - 1) / 2;
str[dev];
}
}
}
