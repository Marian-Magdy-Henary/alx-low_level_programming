#include "main.h"
/**
 * _memcpy - entry point
 *
 * @dest : checks input of function
 *
 * @src : checks input of function
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int r = n;
for (i = 0; i < r; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
