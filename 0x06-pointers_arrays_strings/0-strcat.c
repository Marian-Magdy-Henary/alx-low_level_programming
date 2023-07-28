#include "main.h"
/**
 * *_strcat - entry point
 *
 * @src : checks input of function
 *
 * @dest : checks input of function
 *
 * Return: always  'dest' (success)
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int x = 0;
while (dest[x])
{
x++;
}
for (i = 0; src[i]; i++)
{
dest[x++] = src[i];
}
return (dest);
}
