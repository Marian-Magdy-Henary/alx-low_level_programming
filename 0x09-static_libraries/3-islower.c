#include "main.h"
/**
 * _islower - entry point
 *
 * @c : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int _islower(int c)
{
if (c >= 97 &&  c <= 122)
{
return (1);
}
else
{
return (0);
}
}

