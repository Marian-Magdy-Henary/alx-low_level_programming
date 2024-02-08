#include "main.h"
#include <stdlib.h>
/**
 * *create_array - entry point
 *
 * @size : checks input of function
 *
 * @c : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *create_array(unsigned int size, char c)
{
char *n = NULL;
n = malloc(size);
if (size == 0 || n == 0)
{
return (NULL);
}
while (size--)
{
n[size] = c;
}
return (n);
}
