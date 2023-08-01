#include "main.h"
/**
 * *_memset - entry point
 *
 * @s : checks input of function
 *
 * @b : checks input of function
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (i = 0; s[i] != '\0'; i++)
if (i < (n - 1))
{
s[i] = b;
}
else
{
s[i] = s[i];
}
return (s);
}
