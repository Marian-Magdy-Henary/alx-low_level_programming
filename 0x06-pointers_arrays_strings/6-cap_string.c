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
if (str[i - 1] == ' '||
str[i - 1] == '\n'|| 
str[i - 1] == '\t'||
str[i - 1] == ','|| 
str[i - 1] == ';'|| 
str[i - 1] == '.'|| 
str[i - 1] == '!'|| 
str[i - 1] == '?'|| 
str[i - 1] == '"'|| 
str[i - 1] ==  '('|| 
str[i - 1] ==  ')'|| 
str[i - 1] == '{' ||
str[i - 1] == '}'&&
str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}
return (str);
}

