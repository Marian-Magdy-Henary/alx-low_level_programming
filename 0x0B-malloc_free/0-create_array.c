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
unsigned int i = 0;
char *n = (char *)malloc(size);
if (size == 0 || n == 0)
{
return (NULL);
}
for (i = 0; i <= size; i++)
{
n[i] = c;
}
return (n);
}
