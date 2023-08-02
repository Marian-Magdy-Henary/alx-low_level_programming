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
if (n < 0)
{
return (-1);
}
else if (n == 0);
{
return (1);
}
return (n * factorial(n - 1));
}
