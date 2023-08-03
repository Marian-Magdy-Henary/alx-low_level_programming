 #include "main.h"
/**
 * is_prime_number - entry point
 *
 * @n : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int is_prime_number(int n)
{
if (n % n != 0 || n % 1 != 0)
{
return (1);
}
if (n == 0 || n == 1)
{
return (0);
}
else if (n % n == 0 || n % 1 == 0)
{
return (0);
}
}
