#include "main.h"
/**
 * _isdigit- entry point
 *
 * @c : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else 
{
return (0);
}
}
