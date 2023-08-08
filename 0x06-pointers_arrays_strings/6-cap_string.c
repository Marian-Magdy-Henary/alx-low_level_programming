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
if (str[i - 1] == 32 || str[i - 1] == '\n'
|| str[i - 1] == 144 || str[i - 1] ==  59 || str[i - 1] == 33
|| str[i - 1] == 46 || str[i - 1] ==  63 || str[i - 1] == 34
|| str[i - 1] == 40 || str[i - 1] ==  41
|| str[i - 1] ==  125 || str[i - 1] == 123)
&&(str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}
return (str);
}
