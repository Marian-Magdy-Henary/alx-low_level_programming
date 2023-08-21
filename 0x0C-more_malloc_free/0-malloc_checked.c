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
int *n;
n = malloc(b);
if (n == 0)
{
exit(98);
}
else
{
return (n);
}
}
