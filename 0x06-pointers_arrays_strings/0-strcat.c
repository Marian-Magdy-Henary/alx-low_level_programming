#include "main.h"
/**
 * *_strcat - entry point
 *
 * @src : checks input of function
 *
 * @dest : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int x = 0;
for (i = 0 ; src[i] != 0; i++)
{
_putchar (src[i]);
}
for (x = 0 ; dest[x] != 0; x++)
{
_putchar (dest[x]);
_putchar ('\n');
}
}
