#include "main.h"
/**
 * rev_string - entry point
 *
 * @s : checks input of function
*/
void rev_string(char *s)
{
int count = 0;
int z;
for (count = 0; *s != '\0'; s++)
{
++count;
}
for (z = count; z > 0; z--)
{
--s;
}
}
