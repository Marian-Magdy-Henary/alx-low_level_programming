#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - entry point
 *
 * @s1 : checks input of function
 *
 * @s2 : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *str_concat(char *s1, char *s2)
{
int i = 0;
int x = 0;
int z = 0;
int size1;
int size2;
char *n;
for (x = 0; s1[x] != '\0'; x++)
;
for (z = 0; s2[z] != '\0'; z++)
;
size1 = x;
size2 = z;
n = malloc((size1  + size2) *sizeof(char) + 1);
if (n == 0)
{
return (0);
}
if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
for (i = 0; i <= size1 + size2 ; i++)
{
if (i < size1)
{
n[i] = s1[i];
}
else
{
n[i] = s2[i - size1];
}
}
return (n);
}

