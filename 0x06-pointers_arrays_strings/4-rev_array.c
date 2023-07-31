#include "main.h"
/**
 * reverse_array - entry point
 *
 * @a : checks input of function
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
void reverse_array(int *a, int n)
{
int i = 0;
for (i = 0; i > n && a[i] != '\0'; i++)
;
a++;
for (i = n; a[i]; i--)
{
a++;
}
return (a);
}
