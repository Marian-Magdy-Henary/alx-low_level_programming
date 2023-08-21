#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked- entry point
 *
 * @b : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
void *malloc_checked(unsigned int b)
{
char *n;
n = malloc(b + 1);
if (n == 0)
{
return ((void *)98);
}
else
{
return (n);
}
}
