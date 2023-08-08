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
if (str[i] == 32 || str[i] == '\n'
|| str[i] == 144 || str[i] ==  59 || str[i] == 33
|| str[i] == 46 || str[i] ==  63 || str[i] == 34
|| str[i] == 40 || str[i] ==  41
|| str[i] ==  125 || str[i] == 123)
&& (str[i + 1] >= 97 && str[i + 1] <= 122)
{
str[i + 1] = str[i + 1] - 32;
}
}
return (str);
}
