#include "main.h"
/**
 * *_strcat - entry point
 *
 * @src : checks input of function
 *
 * @dest : checks input of function
 *
 * Return: always  'con' (success)
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int x = 0;
char con = ' ';
}
for (x = 0 ; dest[x] != 0; x++)
{
con = dest[x];
}
for (i = 0 ; src[i] != 0; i++)
{
con = con + src[i];
}
return (con);
}
