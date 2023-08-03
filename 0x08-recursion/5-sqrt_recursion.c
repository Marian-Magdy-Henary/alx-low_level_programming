 #include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - entry point
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int add(int n, int x);
int _sqrt_recursion(int n)
{
return (add(n, 1));
}
/**
 * add - entry point
 *
 * @n : checks input of function
 *
 * @x : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int add(int n, int x)
{
if (x * x == n)
{
return (x);
}
else if (x * x != n)
{
return (add(n, x + 1));
}
else
{
return (-1);
}
}
