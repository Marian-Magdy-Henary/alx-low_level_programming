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
int size1;
int size2;
char *n;
size1 = sizeof(s1);
size2 = sizeof(s2);
n = malloc((size1  + size2)*sizeof(char) + 1));
if (n == 0)
{
return (0);
}
if (s1 == NULL)
{
s1 = '\n';
}
if (S2 == NULL)
{
s2 = '\n';
}
for (i = 0; i <= size1 + size2 ; i++)
{
if (i < size1)
{
n[i] = s1[i];
}
else
{
n[i] = s[i- size1];
}
}
n[i] = '\0';
return (n);
}

