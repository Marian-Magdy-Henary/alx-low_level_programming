#include "main.h"
/**
 * *_strncat - entry point
 *
 * @dest : checks input of function
 *
 * @src : checks input of function
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int x = 0;
while (dest[x])
{
x++;
}
for (i = 0; i < n &&  src[i] != '\0'; i++)
{
dest[x + i] = src[i];
}
dest[x + i] = '\0';
return (dest);
}
