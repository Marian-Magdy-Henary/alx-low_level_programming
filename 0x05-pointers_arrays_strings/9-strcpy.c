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
int c = 0;
for (i = 0; src[i] != '\0'; i++)
;
i++;
for (c = 0; dest[c]; c++)
{
dest[c] = src[i];
}
return (dest);
}
