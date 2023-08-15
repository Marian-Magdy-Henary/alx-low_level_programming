#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - entry point
 *
 * @str : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_strdup(char *str)
{
int i = 0;
int size = 0;
char *n;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0' ; i++)
{
n = malloc(i * sizeof(str) + 1);
if (n == 0)
{
return (NULL);
}
else
{
for (i = 0 ; i < size; i++)
{
n[i] = str[i];
}
}
}
return (n);
}

