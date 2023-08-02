 #include "main.h"
/**
 * factorial - entry point
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int factorial(int n)
{
int fac = 0;
if (n < 0)
{
return (-1);
}
else
{
fac = n * factorial(n - 1);
return (fac);
}
}
