#include "main.h"
/**
 * cap_string - entry point
 *
 * @str : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *cap_string(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0' ; i++)
{
if (str[i] == 32 || '\n' || i44 || 59 || 33 || 46 || 63 || 34 || 40 || 41 || 125 || 123 )
{
if (str[i + 1] >= 97 && str[i + 1] <= 122)
{
str[i + 1] = str[i + 1] - 32;
}
}
}
return (str);
}
