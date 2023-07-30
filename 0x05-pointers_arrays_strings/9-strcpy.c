#include "main.h"
/**
 * *_strcpy - entry point
 *
 * @dest : checks input of function
 *
 * @src : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i + 1] = '\0';
return (dest);
}
