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
int j = 0;
int size = 0;
char *X;
if (str == NULL)
{
return (NULL);
}
for (size = 0; str[size] != '\0' ; size++)
{
}
X = malloc(size * sizeof(*str) + 1);
if (X == 0)
{
return (NULL);
}
else
{
for (j = 0 ; j < size ; j++)
{
X[j] = str[j];
}
return (X);
}
}


