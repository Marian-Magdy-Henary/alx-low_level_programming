#include "main.h"
/**
 * swap_int - entry point
 *
 * @a : checks input of function
 *
 * @b : checks input of function
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
