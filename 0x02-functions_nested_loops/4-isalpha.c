#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int _isalpha(int c)
{
if (c >= 97 &&  c <= 122 || c >= 65 &&  c <= 90)
{
return (1);
}
else
{
return (0);
}
}
