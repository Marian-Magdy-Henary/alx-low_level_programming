#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 *
 * @a : checks input of function
 *
 * @n : checks input of function
*/
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n &&  a[i] != '\0'; i++)
{
printf ("%d ",a[i]);
if (i == n)
{
printf ("");
}
else if (i < n)
{
printf ("%s %s",",","");
}
}
}
