#include "main.h"
/**
 * _strpbrk- entry point
 *
 * @s : checks input of function
 *
 * @accept : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int x = 0;
for (i = 0; s[i] >= '\0'; i++)
{
for (x = 0; accept[x] >= '\0' ; x++)
{
if (s[i] == accept[x])
{
break;
return (s++);
}
else
{
return ('\0');
}
}
}
return (0);
}
