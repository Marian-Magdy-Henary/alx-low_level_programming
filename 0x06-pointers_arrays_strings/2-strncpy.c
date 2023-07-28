#include "main.h"
/**
 * *_strncpy - entry point
 *
 * @dest : checks input of function
 *
 * @src : checks input of function
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; i < n &&  src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
