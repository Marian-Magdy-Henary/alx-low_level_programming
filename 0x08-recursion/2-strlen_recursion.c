 #include "main.h"
/**
 * _strlen_recursion - entry point
 *
 * @s : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
int _strlen_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
return (0);
}
else
{
_strlen_recursion (s + 1);
i++;
return (i);
}
}
