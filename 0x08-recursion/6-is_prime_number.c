 #include "main.h"
 #include <stdio.h>
/**
 * is_prime_number - entry point
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int add(int x, int y);
int is_prime_number(int n)
{
return (add(n, 2));
}
/**
 * add- entry point
 *
 * @x : checks input of function
 *
 * @y : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int add(int x, int y)
{
if (y >= x || n > 1)
{
return (1);
}
else if (n % y == 0 || n > 1)
{
return (0);
}
return (add(x, y + 1));
}
