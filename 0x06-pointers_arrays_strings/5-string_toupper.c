#include "main.h"
/**
 * string_toupper - entry point
 *
 * @str : checks input of function
 *
 * Return: always  1 if 'c' is lower otherwise 0 (success)
*/
char *string_toupper(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0' ; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}
return (str[i]);
}
