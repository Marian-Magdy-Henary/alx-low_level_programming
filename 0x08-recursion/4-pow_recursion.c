 #include "main.h"
/**
 * _pow_recursion - entry point
 *
 * @x : checks input of function
 *
 * @y : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
return (_pow_recursion(int x, int (y + 1));
}
}
