#include "main.h"
/**
 * _isupper - entry point
 *
 * @c : checks input of function
 *
 * Return: always  1 if 'c' is upper otherwise 0 (success)
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
