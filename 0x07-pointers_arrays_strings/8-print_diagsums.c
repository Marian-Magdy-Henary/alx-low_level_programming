#include "main.h"
/**
 * print_diagsums- entry point
 *
 * @a : checks input of function
 *
 * @size : checks input of function
*/
void print_diagsums(int *a, int size)
{
int i = 0;
int sum = 0;
int sum1 = 0;
for (i = 0; i < size ; i++)
{
sum += a[i];
sum1 += a[size - i - 1];
_putchar(sum);
_putchar(',');
_putchar(' ');
_putchar(sum1);
_putchar('\n');
}
}
