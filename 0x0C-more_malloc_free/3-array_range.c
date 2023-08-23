#include "main.h"
#include <stdlib.h>
/**
 * *array_range - entry point
 *
 * @max : checks input of function
 *
 * @min : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int *array_range(int min, int max)
{
int i = 0;
int j = 0;
int *n;
if (min > max)
{
return (NULL);
}
i = max - min + 1;
n = malloc(sizeof(int) * i);
if (!n)
{
return (NULL);
}
for (j = 0; j <= i ; j++)
{
n[j] = min++;
}
return (n);
}
