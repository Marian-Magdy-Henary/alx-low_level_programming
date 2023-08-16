#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - entry point
 *
 * @height : checks input of function
 *
 * @width : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int **alloc_grid(int width, int height)
{
int i = 0;
int x = 0;
int **n;
n = malloc(height  * sizeof(*n));
if (width <= 0 || height <= 0 || n == 0)
{
return (NULL);
}
else
{
for (i = 0; i <= height ; i++)
{
n[i] = malloc(width  * sizeof(**n));
if (n[i] == 0)
{
while (i--)
{
free(n[i]);
}
free(n);
return (NULL);
}
for (x = 0; x <= width ; x++)
{
n[i][x] = 0;
}
}
}
return (n);
}
