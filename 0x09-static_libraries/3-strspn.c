#include "main.h"
/**
 * _strspn- entry point
 *
 * @s : checks input of function
 *
 * @accept : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int x = 0;
unsigned int count = 0;
for (i = 0; s[i] >= '\0'; i++)
{
for (x = 0; accept[x] >= '\0' ; x++)
{
if (s[i] == accept[x])
{
count++;
break;
}
else if (accept[x + 1] == '\n')
{
return (count);
}
}
}
return (0);
}

