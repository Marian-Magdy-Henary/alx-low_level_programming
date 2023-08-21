#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - entry point
 *
 * @s1 : checks input of function
 *
 * @s2 : checks input of function
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int x = 0;
unsigned int z = 0;
unsigned int size1;
unsigned int size2;
char *pint;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (x = 0; s1[x] != '\0'; x++)
;
for (z = 0; s2[z] != '\0'; z++)
;
size1 = x;
size2 = n;
pint = malloc((size1  + size2) *sizeof(char) + 1);
if (n == 0)
{
return (0);
}
for (i = 0; i <= z ; i++)
{
if (n >= i)
{
pint[i] = s2[i];
}
else
{
pint[i] = s1[i + size2];
}
}
return (pint);
}
