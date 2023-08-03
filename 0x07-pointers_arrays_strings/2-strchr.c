 #include "main.h"
/**
 * _strchr - entry point
 *
 * @s : checks input of function
 *
 * @c : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s[i]);
}
else if (s[i] != c)
{
return ('\0');
}
}
}
