 #include "main.h"
/**
 * _sqrt_recursion - entry point
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int _sqrt_recursion(int n)
{
if (n % 10 != 0 || n < 0)
{
return (-1);
}
if (n % 10 == 0 && n > 0)
{
n /= _sqrt_recursion(int n)
}
return (n);
}
