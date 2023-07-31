#include "main.h"
/**
 * reverse_array - entry point
 *
 * @a : checks input of function
 *
 * @n : checks input of function
*/
void reverse_array(int *a, int n)
{
int i = 0;
int rev = 0;
for (i = 0; i > n && a[i] != '\0'; i++)
;
rev = a[i];
for (i = (n - 1); a[i]; i--)
{
rev = a[i];
}
}
