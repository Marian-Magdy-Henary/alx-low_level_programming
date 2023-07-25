#include "main.h"
/**
 * puts2 - entry point
 *
 * @str : checks input of function
*/
void puts2(char *str)
{
int count = 0;
for (count = 0; *str != '\0'; str++)
{
if (str[count]/2 == 0)
{
str++;    
}
++count;
}
}
